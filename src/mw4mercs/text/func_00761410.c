/*
 * FUN_00761410 (599 B) — append an item to a list. Validates the list
 * object (param_1), allocates a 3-dword item via a vtable allocator
 * (call [EAX+0x18]), fills it, and links it into the list at
 * [ESI+0x114 + count*4]. Returns 0x50 on success, 0x51 on failure.
 *
 * The function is obfuscated with EB 04 + junk-byte (D6 D6 xx xx) jump
 * chains crossed with long EB 00 no-op sleds. The EB 04/EB 00 jumps are
 * real `jmp` mnemonics; the 4 junk bytes after each EB 04 are data and
 * are emitted with __emit (they are not instructions).
 *
 * __stdcall, RET 4 (4 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00761410(
    int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     eax, dword ptr [esi + 0x100]
        test    eax, eax
        jz      L_1679
        ; --- sled 1 ---
        jmp     L_142d
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_142d: jmp L_142f
    L_142f: jmp L_1431
    L_1431: jmp L_1433
    L_1433: jmp L_1435
    L_1435: jmp L_1437
    L_1437: jmp L_1439
    L_1439: jmp L_143b
    L_143b: jmp L_143d
    L_143d: jmp L_143f
    L_143f: jmp L_1441
    L_1441: jmp L_1443
    L_1443: jmp L_1445
    L_1445: jmp L_1447
    L_1447: jmp L_1449
    L_1449: jmp L_144b
    L_144b: jmp L_144d
    L_144d: jmp L_144f
    L_144f: jmp L_1451
    L_1451: jmp L_1453
    L_1453: jmp L_1455
    L_1455: jmp L_1457
    L_1457: jmp L_1459
    L_1459: jmp L_145b
    L_145b: jmp L_145d
    L_145d: jmp L_145f
    L_145f: jmp L_1461
    L_1461: jmp L_1463
    L_1463:
        jmp     L_1469
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x78
        __emit 0x00
    L_1469: jmp L_146b
    L_146b: jmp L_146d
    L_146d: jmp L_146f
    L_146f: jmp L_1471
    L_1471: jmp L_1473
    L_1473: jmp L_1475
    L_1475: jmp L_1477
    L_1477: jmp L_1479
    L_1479: jmp L_147b
    L_147b: jmp L_147d
    L_147d: jmp L_147f
    L_147f: jmp L_1481
    L_1481: jmp L_1483
    L_1483: jmp L_1485
    L_1485: jmp L_1487
    L_1487: jmp L_1489
    L_1489: jmp L_148b
    L_148b: jmp L_148d
    L_148d: jmp L_148f
    L_148f: jmp L_1491
    L_1491: jmp L_1493
    L_1493: jmp L_1495
    L_1495: jmp L_1497
    L_1497: jmp L_1499
    L_1499: jmp L_149b
    L_149b: jmp L_149d
    L_149d: jmp L_149f
    L_149f: jmp L_14a1
    L_14a1: jmp L_14a3
    L_14a3: jmp L_14a5
    L_14a5: jmp L_14a7
    L_14a7: jmp L_14a9
    L_14a9: jmp L_14ab
    L_14ab: jmp L_14ad
    L_14ad: jmp L_14af
    L_14af: jmp L_14b1
    L_14b1: jmp L_14b3
    L_14b3: jmp L_14b5
    L_14b5: jmp L_14b7
    L_14b7: jmp L_14b9
    L_14b9: jmp L_14bb
    L_14bb: jmp L_14bd
    L_14bd: jmp L_14bf
    L_14bf: jmp L_14c1
    L_14c1: jmp L_14c3
    L_14c3: jmp L_14c5
    L_14c5: jmp L_14c7
    L_14c7: jmp L_14c9
    L_14c9: jmp L_14cb
    L_14cb: jmp L_14cd
    L_14cd: jmp L_14cf
    L_14cf: jmp L_14d1
    L_14d1: jmp L_14d3
    L_14d3: jmp L_14d5
    L_14d5: jmp L_14d7
    L_14d7: jmp L_14d9
    L_14d9: jmp L_14db
    L_14db:
        test    esi, esi
        jz      L_1679
        mov     ebx, dword ptr [ebp + 0x10]
        test    ebx, ebx
        jz      L_1679
        ; --- sled 3 ---
        jmp     L_14f4
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_14f4: jmp L_14f6
    L_14f6: jmp L_14f8
    L_14f8: jmp L_14fa
    L_14fa: jmp L_14fc
    L_14fc: jmp L_14fe
    L_14fe: jmp L_1500
    L_1500: jmp L_1502
    L_1502: jmp L_1504
    L_1504: jmp L_1506
    L_1506: jmp L_1508
    L_1508: jmp L_150a
    L_150a: jmp L_150c
    L_150c: jmp L_150e
    L_150e: jmp L_1510
    L_1510: jmp L_1512
    L_1512: jmp L_1514
    L_1514: jmp L_1516
    L_1516: jmp L_1518
    L_1518: jmp L_151a
    L_151a: jmp L_151c
    L_151c: jmp L_151e
    L_151e: jmp L_1520
    L_1520: jmp L_1522
    L_1522: jmp L_1524
    L_1524: jmp L_1526
    L_1526: jmp L_1528
    L_1528: jmp L_152a
    L_152a:
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jz      L_1679
        mov     ecx, edi
        or      ecx, 0x3
        cmp     ecx, 0x3
        jnz     L_1679
        ; --- sled 4 ---
        jmp     L_1549
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_1549: jmp L_154b
    L_154b: jmp L_154d
    L_154d: jmp L_154f
    L_154f: jmp L_1551
    L_1551: jmp L_1553
    L_1553: jmp L_1555
    L_1555: jmp L_1557
    L_1557: jmp L_1559
    L_1559: jmp L_155b
    L_155b: jmp L_155d
    L_155d: jmp L_155f
    L_155f: jmp L_1561
    L_1561: jmp L_1563
    L_1563: jmp L_1565
    L_1565: jmp L_1567
    L_1567: jmp L_1569
    L_1569: jmp L_156b
    L_156b: jmp L_156d
    L_156d: jmp L_156f
    L_156f: jmp L_1571
    L_1571: jmp L_1573
    L_1573: jmp L_1575
    L_1575: jmp L_1577
    L_1577: jmp L_1579
    L_1579: jmp L_157b
    L_157b: jmp L_157d
    L_157d: jmp L_157f
    L_157f:
        cmp     dword ptr [esi + 0x104], 0x14
        jnc     L_1679
        ; --- sled 5 ---
        jmp     L_1592
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_1592: jmp L_1594
    L_1594: jmp L_1596
    L_1596: jmp L_1598
    L_1598: jmp L_159a
    L_159a: jmp L_159c
    L_159c: jmp L_159e
    L_159e: jmp L_15a0
    L_15a0: jmp L_15a2
    L_15a2: jmp L_15a4
    L_15a4: jmp L_15a6
    L_15a6: jmp L_15a8
    L_15a8: jmp L_15aa
    L_15aa: jmp L_15ac
    L_15ac: jmp L_15ae
    L_15ae: jmp L_15b0
    L_15b0: jmp L_15b2
    L_15b2: jmp L_15b4
    L_15b4: jmp L_15b6
    L_15b6: jmp L_15b8
    L_15b8: jmp L_15ba
    L_15ba: jmp L_15bc
    L_15bc: jmp L_15be
    L_15be: jmp L_15c0
    L_15c0: jmp L_15c2
    L_15c2: jmp L_15c4
    L_15c4: jmp L_15c6
    L_15c6: jmp L_15c8
    L_15c8:
        push    0x3
        push    0xc
        call    dword ptr [eax + 0x18]
        add     esp, 0x8
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x4], ebx
        ; --- sled 6 ---
        jmp     L_15dd
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_15dd: jmp L_15df
    L_15df: jmp L_15e1
    L_15e1: jmp L_15e3
    L_15e3: jmp L_15e5
    L_15e5: jmp L_15e7
    L_15e7: jmp L_15e9
    L_15e9: jmp L_15eb
    L_15eb: jmp L_15ed
    L_15ed: jmp L_15ef
    L_15ef: jmp L_15f1
    L_15f1: jmp L_15f3
    L_15f3: jmp L_15f5
    L_15f5: jmp L_15f7
    L_15f7: jmp L_15f9
    L_15f9: jmp L_15fb
    L_15fb: jmp L_15fd
    L_15fd: jmp L_15ff
    L_15ff: jmp L_1601
    L_1601: jmp L_1603
    L_1603: jmp L_1605
    L_1605: jmp L_1607
    L_1607: jmp L_1609
    L_1609: jmp L_160b
    L_160b: jmp L_160d
    L_160d: jmp L_160f
    L_160f: jmp L_1611
    L_1611: jmp L_1613
    L_1613:
        mov     edx, dword ptr [ebp + 0x14]
        mov     dword ptr [eax + 0x8], edx
        mov     ecx, dword ptr [esi + 0x104]
        mov     dword ptr [esi + ecx*4 + 0x114], eax
        mov     eax, dword ptr [esi + 0x104]
        inc     eax
        mov     dword ptr [esi + 0x104], eax
        ; --- sled 7 ---
        jmp     L_1639
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_1639: jmp L_163b
    L_163b: jmp L_163d
    L_163d: jmp L_163f
    L_163f: jmp L_1641
    L_1641: jmp L_1643
    L_1643: jmp L_1645
    L_1645: jmp L_1647
    L_1647: jmp L_1649
    L_1649: jmp L_164b
    L_164b: jmp L_164d
    L_164d: jmp L_164f
    L_164f: jmp L_1651
    L_1651: jmp L_1653
    L_1653: jmp L_1655
    L_1655: jmp L_1657
    L_1657: jmp L_1659
    L_1659: jmp L_165b
    L_165b: jmp L_165d
    L_165d: jmp L_165f
    L_165f: jmp L_1661
    L_1661: jmp L_1663
    L_1663: jmp L_1665
    L_1665: jmp L_1667
    L_1667: jmp L_1669
    L_1669: jmp L_166b
    L_166b: jmp L_166d
    L_166d: jmp L_166f
    L_166f:
        mov     eax, 0x50
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    L_1679:
        pop     edi
        pop     esi
        mov     eax, 0x51
        pop     ebx
        pop     ebp
        ret
    }
}
