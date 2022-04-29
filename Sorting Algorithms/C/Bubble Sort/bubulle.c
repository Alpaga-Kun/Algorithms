/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubulle.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alpaga-Kun <teambodzen20@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:24:44 by Alpaga-Kun        #+#    #+#             */
/*   Updated: 2022/04/29 17:26:56 by Alpaga-Kun       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

static bool verifyArguments(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++)
            if (!isdigit(av[i][j]))
                return (false);
    }
    return (true);
}

static void swap(int *items1, int *items2)
{
    int tmp = *items1;
    *items1 = *items2;
    *items2 = tmp;
}

static void bubbleSort(int *list, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (list[j] > list[j + 1])
                swap(&list[j], &list[j + 1]);
}

static void displayList(int *list, int n)
{
    fprintf(stdout, "List Sorted:\n[");
    for (int i = 0; i < n; i++)
        (i + 1 == n) ? fprintf(stdout, "%d]\n", list[i]) : fprintf(stdout, "%d, ", list[i]);
}

static int process(int ac, char **av)
{
    int j = 0;
    int list[ac - 1];

    for (int i = 1; i != ac; i++, j++)
        list[j] = atoi(av[i]);
    bubbleSort(list, ac - 1);
    displayList(list, ac - 1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2) {
        fprintf(stderr, "Invalid number of argument...\n");
        exit(84);
    } else if (verifyArguments(ac, av) == false) {
        fprintf(stderr, "Invalid arguments! Must be a number...\n");
        exit(84);
    } else
        return (process(ac, av));
}