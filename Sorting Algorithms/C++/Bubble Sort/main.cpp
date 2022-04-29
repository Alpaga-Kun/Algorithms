/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alpaga-Kun <teambodzen20@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:27:50 by Alpaga-Kun        #+#    #+#             */
/*   Updated: 2022/04/29 17:45:32 by Alpaga-Kun       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

using namespace std;

static void displayList(int *list, int n)
{
    fprintf(stdout, "List Sorted:\n[");
    for (int i = 0; i < n; i++)
        (i + 1 == n) ? fprintf(stdout, "%d]\n", list[i]) : fprintf(stdout, "%d, ", list[i]);
}

static void bubulleSort(int *list, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (list[j] > list[j + 1])
                swap(list[j], list[j + 1]);
}

static int process(int ac, char **av)
{
    int j = 0;
    int list[ac - 1];

    for (int i = 1; i != ac; i++, j++)
        list[j] = atoi(av[i]);
    bubulleSort(list, ac - 1);
    displayList(list, ac - 1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2) {
        cerr << "Error: We expected at least 2 parameters." << endl;
        exit(84);
    } else
        return (process(ac, av));
    return (0);
}