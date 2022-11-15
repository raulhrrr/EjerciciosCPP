#include <iostream>
#include <list>

using namespace std;

struct Room {
    int id;
    bool isAvailable;
};

struct Hotel {
    list<Room> floorOne;
    list<Room> floorTwo;
    list<Room> floorThree;
    list<Room> floorFour;
};

int loadMenu() {
    int option;

    cout << "\n** Ingrese la opcion que desea realizar **\n" << endl;
    cout << "1. Ver disponibilidad de habitaciones" << endl;
    cout << "2. Reservar" << endl;
    cout << "3. Cancelar reservacion" << endl;
    cout << "4. Finalizar programa" << endl;
    cout << "" << endl;

    cin >> option;

    return option;
}

list<list<Room>> populateHotel(Hotel *hotel) {
    list<Room> roomsFloorOne = {
            {101, true},
            {102, false},
            {103, true},
            {104, true}
    };
    list<Room> roomsFloorTwo = {
            {201, false},
            {202, true},
            {203, true},
            {204, false}
    };
    list<Room> roomsFloorThree = {
            {301, true},
            {302, true},
            {303, false},
            {304, true}
    };
    list<Room> roomsFloorFour = {
            {401, true},
            {402, false},
            {403, true},
            {404, true}
    };

    hotel->floorOne = roomsFloorOne;
    hotel->floorTwo = roomsFloorTwo;
    hotel->floorThree = roomsFloorThree;
    hotel->floorFour = roomsFloorFour;

    return {hotel->floorOne, hotel->floorTwo, hotel->floorThree, hotel->floorFour};
}

void showRooms(list<list<Room>> floors) {
    cout << "** Disponibilidad de las habitaciones **" << endl;
    for (list<Room> &rooms: floors) {
        for (Room &room: rooms) {
            if (room.isAvailable) {
                cout << room.id << " -> " << &room << endl;
            } else {
                cout << room.id << " -> " << "Ocupada" << endl;
            }
        }
        cout << "-*-*-*-*-**-*-*-*-*-" << endl;
    }
}

void reserveOrCancelRoom(int userOption, list<list<Room>> *floors) {

    int roomId;

    string actionVerb = userOption == 2 ? "reservar" : "cancelar";
    string actionAdjective = userOption == 2 ? "reservado" : "cancelado";
    cout << "** Ingrese la habitacion a " << actionVerb << " **" << endl;
    cin >> roomId;

    for (list<Room> &rooms: *floors) {
        for (Room &room: rooms) {

            if (room.id != roomId) continue;

            if (userOption == 2 && !room.isAvailable) {
                cout << "ERROR: Esta intentando reservar una habitacion que no se encuentra disponible" << endl;
                return;
            }

            if (userOption == 3 && room.isAvailable) {
                cout << "ERROR: Esta intentando cancelar la reserva para una habitacion que se encuentra disponible" << endl;
                return;
            }

            room.isAvailable = !room.isAvailable;
            cout << "Se ha " << actionAdjective << " la habitacion " << room.id << endl;
            return;

        }
    }

    cout << "** La habitacion seleccionada no existe **" << endl;

}

int main() {

    Hotel hotel;
    int option = -1;
    list<list<Room>> floors = populateHotel(&hotel);

    while (option != 4) {

        option = loadMenu();

        switch (option) {
            case 1:
                showRooms(floors);
                break;
            case 2:
                reserveOrCancelRoom(2, &floors);
                break;
            case 3:
                reserveOrCancelRoom(3, &floors);
                break;
            case 4:
                cout << "** Adios! **" << endl;
                break;
            default:
                cout << "** La opcion seleccionada no existe **" << endl;
                break;
        }
    }


    return 0;
}
