/****************************************************************************!
*                            _                                               *
*                           / \                         _                    *
*                   ___    / _ \   _ __ ___   ____  ___| |                   *
*                  / _ \  / /_\ \ | '_ ` _ \./  _ \/  _  |                   *
*                 |  __/ /  ___  \| | | | | |  (_) ) (_) |                   *
*                  \___|/__/   \__\_| |_| |_|\____/\_____/                   *
*                                                                            *
*                            eAmod Source File                               *
*                                                                            *
******************************************************************************
* src/config/renewal.h                                                       *
******************************************************************************
* Copyright (c) eAmod Dev Team                                               *
* Copyright (c) rAthena Dev Team                                             *
* Copyright (c) brAthena Dev Team                                            *
* Copyright (c) Hercules Dev Team                                            *
* Copyright (c) 3CeAM Dev Team                                               *
* Copyright (c) Athena Dev Teams                                             *
*                                                                            *
* Licensed under GNU GPL                                                     *
* For more information read the LICENSE file in the root of the emulator     *
*****************************************************************************/

#ifndef _RENEWAL
#define _RENEWAL
#ifndef _CONFIG_RENEWAL_H_
#define _CONFIG_RENEWAL_H_

/**
 * @INFO: Este arquivo tem o proposito de definir configurações apenas da renovação.
 * Para desabilitar uma configuração, comente a linha que contém o #define com //
 **/

/// Modo renovação
#define RENEWAL

/// Tempo de conjuração de habilidades, da renovação
/// Dentro dos padrões da renovação, a conjuração:
///  - Tem sua fórmula reduzida por DEX * 2 + INT
///  - O tempo de conjuração se divide em fórmula e fixo, cujo o fixo será adicionado por habilidades e itens.
#define RENEWAL_CAST

/// Taxa de drop da renovação
/// A tabela de drops pode ser analisada em: 
#define RENEWAL_DROP

/// Taxa de experiência da renovação
/// A tabela de experiência pode ser analisada em: 
#define RENEWAL_EXP

/// Taxa de modificação do dano conforme o nível
#define RENEWAL_LVDMG

/// Habilidade "encantar com veneno mortal" da renovação
/// Fora dos padrões da renovação a habilidade:
///  - Não terá o dano reduzido por 400%
///  - Não terá efeito de amplificação com a habilidade grimtooth
///  - Ataque com armas e status STR (força) serão aumentados.
#define RENEWAL_EDP

/// Velocidade de ataque da renovação
/// Dentro dos parâmetros da renovação a velocidade de ataque:
/// - Terá penalidade e redução de velocidade de ataque conforme escudos utilizados.
/// - O status de AGI (agilidade) terão grande influência no cálculo da fórmula.
/// - Algumas habilidades e itens mudam a fórmula de bonificar velocidade de ataque, para valores fixos.
#define RENEWAL_ASPD

#endif // _CONFIG_RENEWAL_H_
#endif // _RENEWAL
