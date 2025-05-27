// –еализовать модуль, который рассчитывает рассто€ние в эвклидовом пространстве.
// ћодуль должен рассчитать рассто€ние в трехмерном пространстве от своего местоположени€,
// задаваемого вручную, до места назначени€, которое тоже задаетс€ вручную.
// ќценить врем€ достижение цели на основе у.е. скорости и рассто€ни€.

#include <iostream>
#include <chrono>
#include <iomanip>
#include "func.h"

using namespace std;

//занести вычислени€ в отдельную ф-цию, ее дизассемблер посмотреть, применить флаги оптимизации, сравнить скорость исполнени€ ф-ции и количество ассмеблерного кода.

//структура - 3 координатые
//прогнать по трЄм точкам - видео исполнени€ в телеграмм

struct point {
	double coord[3];
	string name;
};

int main() {

	int i = 0;
	double dist = 0;
	double time = 0;
	double velo = 7900;
	double worktime = 0;

	const int cntofpoints = 4;

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

	return 0;
}