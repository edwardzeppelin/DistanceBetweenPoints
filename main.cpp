// Реализовать модуль, который рассчитывает расстояние в эвклидовом пространстве.
// Модуль должен рассчитать расстояние в трехмерном пространстве от своего местоположения,
// задаваемого вручную, до места назначения, которое тоже задается вручную.
// Оценить время достижение цели на основе у.е. скорости и расстояния.

#include <iostream>
#include <chrono>
#include <iomanip>
#include "func.h"

using namespace std;

//занести вычисления в отдельную ф-цию, ее дизассемблер посмотреть, применить флаги оптимизации, сравнить скорость исполнения ф-ции и количество ассмеблерного кода.

//dstntime возвращает структуру - 3 координаты, расстояние и время, передаём её в дальше
//прогнать по трём точкам - видео исполнения в телеграмм

struct point {
	double coord[3];
	string name;
};

int main() {

	//double coord1[3];
	//double coord2[3];
	double dist = 0;
	double time = 0;
	double velo = 7900;
	double worktime = 0;

	int i = 0;

	const int cntofpoints = 4;

	/*
	cout << "Enter start coordinate X: ";
	cin >> coord1[0];

	cout << "Enter start coordinate Y: ";
	cin >> coord1[1];

	cout << "Enter start coordinate Z: ";
	cin >> coord1[2];

	cout << "Enter destination coordinate X: ";
	cin >> coord2[0];

	cout << "Enter destination coordinate Y: ";
	cin >> coord2[1];

	cout << "Enter destination coordinate Z: ";
	cin >> coord2[2];

	cout << "------------------------------------------------------------------" << endl;
	*/
	/*
	infodata points[3];

	points[0].coord1[0] = 34625;
	points[0].coord1[1] = 76291;
	points[0].coord1[2] = -54272;

	points[0].coord2[0] = 45683;
	points[0].coord2[1] = -32467;
	points[0].coord2[2] = 31235;
	*/

	point points[cntofpoints];

	points[0].name = "Alpha";
	points[0].coord[0] = 34625;
	points[0].coord[1] = 76291;
	points[0].coord[2] = -54272;

	points[1].name = "Bravo";
	points[1].coord[0] = 45683;
	points[1].coord[1] = -32467;
	points[1].coord[2] = 31235;

	points[2].name = "Charlie";
	points[2].coord[0] = 86245;
	points[2].coord[1] = 13466;
	points[2].coord[2] = -73412;

	points[3].name = "Delta";
	points[3].coord[0] = -13742;
	points[3].coord[1] = 46724;
	points[3].coord[2] = 93742;

	/*
	for (int i = 0; i < cntofpoints-1; i++) {

		auto start = chrono::high_resolution_clock::now();

		distntime(point1[i].coord, point1[i+1].coord, dist, velo, time);

		auto end = chrono::high_resolution_clock::now();

		chrono::duration<double> duration = end - start;

		worktime = duration.count();

		cout << "Route: from point " << point1[i].name << " to point " << point1[i + 1].name << endl;

		cout << "Distance: " << fixed << setprecision(3) << dist << endl;

		cout << "Time to reach with 1st space speed: " << fixed << setprecision(3) << time << endl;

		cout << "Time of calculate: " << fixed << setprecision(9) << worktime << " seconds" << endl;

		cout << "------------------------------------------------------------------" << endl;

	}
	*/

	while (i < cntofpoints - 1) {

		auto start = chrono::high_resolution_clock::now();

		distntime(points[i].coord, points[i + 1].coord, dist, velo, time);

		auto end = chrono::high_resolution_clock::now();

		chrono::duration<double> duration = end - start;

		worktime = duration.count();

		cout << "Route: from point " << points[i].name << " to point " << points[i + 1].name << endl;

		cout << "Distance: " << fixed << setprecision(3) << dist << endl;

		cout << "Time to reach with 1st space speed: " << fixed << setprecision(3) << time << endl;

		cout << "Time of calculate: " << fixed << setprecision(9) << worktime << " seconds" << endl;

		cout << "------------------------------------------------------------------" << endl;

		i++;
	}


	/*
	while (1) {


		auto start = chrono::high_resolution_clock::now();

		distntime(point1[0].coord, point1[1].coord, dist, velo, time);

		auto end = chrono::high_resolution_clock::now();

		chrono::duration<double> duration = end - start;

		worktime = duration.count();

		cout << "Distance: " << fixed << setprecision(3) << dist << endl;

		cout << "Time to reach with 1st space speed: " << fixed << setprecision(3) << time << endl;

		cout << "Time of calculate: " << fixed << setprecision(9) << worktime << " seconds" << endl;

		cout << "------------------------------------------------------------------" << endl;

	}
	*/
	/*
	coord1[0] = 85426;
	coord1[1] = 13741;
	coord1[2] = -47428;
	coord2[0] = 59352;
	coord2[1] = 96426;
	coord2[2] = 53678;

	auto start = chrono::high_resolution_clock::now();

	distntime(coord1, coord2, dist, velo, time);

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> duration = end - start;

	worktime = duration.count();

	cout << "Distance: " << fixed << setprecision(3) << dist << endl;

	cout << "Time to reach with 1st space speed: " << fixed << setprecision(3) << time << endl;

	cout << "Time of calculate: " << fixed << setprecision(9) << worktime << " seconds" << endl;

	cout << "------------------------------------------------------------------" << endl;
	*/

	return 0;
}