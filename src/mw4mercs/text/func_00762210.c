/*
 * FUN_00762210 (282 B) — Function-pointer dispatch.
 *
 * Stores two params into [eax+0x108]/[eax+0x10c], then if the global
 * function pointer at 0x8bd2fc is non-null, calls it with param_1 and
 * returns 0x50; otherwise returns 0x51.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_8bd2fc)(void);

__declspec(naked) void __stdcall FUN_00762210(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        jmp     L_762219
        __emit 0xD6          /* junk padding skipped by EB 04 jump */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_762219:
        jmp     L_76221b
L_76221b:
        jmp     L_76221d
L_76221d:
        jmp     L_76221f
L_76221f:
        jmp     L_762221
L_762221:
        jmp     L_762223
L_762223:
        jmp     L_762225
L_762225:
        jmp     L_762227
L_762227:
        jmp     L_762229
L_762229:
        jmp     L_76222b
L_76222b:
        jmp     L_76222d
L_76222d:
        jmp     L_76222f
L_76222f:
        jmp     L_762231
L_762231:
        jmp     L_762233
L_762233:
        jmp     L_762235
L_762235:
        jmp     L_762237
L_762237:
        jmp     L_762239
L_762239:
        jmp     L_76223b
L_76223b:
        jmp     L_76223d
L_76223d:
        jmp     L_76223f
L_76223f:
        jmp     L_762241
L_762241:
        jmp     L_762243
L_762243:
        jmp     L_762245
L_762245:
        jmp     L_762247
L_762247:
        jmp     L_762249
L_762249:
        jmp     L_76224b
L_76224b:
        jmp     L_76224d
L_76224d:
        jmp     L_76224f
L_76224f:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [eax + 0x108], ecx
        mov     dword ptr [eax + 0x10c], edx
        jmp     L_76226a
        __emit 0xD6          /* junk padding skipped by EB 04 jump */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_76226a:
        jmp     L_76226c
L_76226c:
        jmp     L_76226e
L_76226e:
        jmp     L_762270
L_762270:
        jmp     L_762272
L_762272:
        jmp     L_762274
L_762274:
        jmp     L_762276
L_762276:
        jmp     L_762278
L_762278:
        jmp     L_76227a
L_76227a:
        jmp     L_76227c
L_76227c:
        jmp     L_76227e
L_76227e:
        jmp     L_762280
L_762280:
        jmp     L_762282
L_762282:
        jmp     L_762284
L_762284:
        jmp     L_762286
L_762286:
        jmp     L_762288
L_762288:
        jmp     L_76228a
L_76228a:
        jmp     L_76228c
L_76228c:
        jmp     L_76228e
L_76228e:
        jmp     L_762290
L_762290:
        jmp     L_762292
L_762292:
        jmp     L_762294
L_762294:
        jmp     L_762296
L_762296:
        jmp     L_762298
L_762298:
        jmp     L_76229a
L_76229a:
        jmp     L_76229c
L_76229c:
        jmp     L_76229e
L_76229e:
        jmp     L_7622a0
L_7622a0:
        mov     ecx, dword ptr [g_8bd2fc]
        test    ecx, ecx
        jnz     L_7622b1
        mov     eax, 0x51
        pop     ebp
        ret
L_7622b1:
        jmp     L_7622b7
        __emit 0xD6          /* junk padding skipped by EB 04 jump */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_7622b7:
        jmp     L_7622b9
L_7622b9:
        jmp     L_7622bb
L_7622bb:
        jmp     L_7622bd
L_7622bd:
        jmp     L_7622bf
L_7622bf:
        jmp     L_7622c1
L_7622c1:
        jmp     L_7622c3
L_7622c3:
        jmp     L_7622c5
L_7622c5:
        jmp     L_7622c7
L_7622c7:
        jmp     L_7622c9
L_7622c9:
        jmp     L_7622cb
L_7622cb:
        jmp     L_7622cd
L_7622cd:
        jmp     L_7622cf
L_7622cf:
        jmp     L_7622d1
L_7622d1:
        jmp     L_7622d3
L_7622d3:
        jmp     L_7622d5
L_7622d5:
        jmp     L_7622d7
L_7622d7:
        jmp     L_7622d9
L_7622d9:
        jmp     L_7622db
L_7622db:
        jmp     L_7622dd
L_7622dd:
        jmp     L_7622df
L_7622df:
        jmp     L_7622e1
L_7622e1:
        jmp     L_7622e3
L_7622e3:
        jmp     L_7622e5
L_7622e5:
        jmp     L_7622e7
L_7622e7:
        jmp     L_7622e9
L_7622e9:
        jmp     L_7622eb
L_7622eb:
        jmp     L_7622ed
L_7622ed:
        push    eax
        call    dword ptr [g_8bd2fc]
        add     esp, 0x4
        jmp     L_7622fd
        __emit 0xD6          /* junk padding skipped by EB 04 jump */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_7622fd:
        jmp     L_7622ff
L_7622ff:
        jmp     L_762301
L_762301:
        jmp     L_762303
L_762303:
        jmp     L_762305
L_762305:
        jmp     L_762307
L_762307:
        jmp     L_762309
L_762309:
        jmp     L_76230b
L_76230b:
        jmp     L_76230d
L_76230d:
        jmp     L_76230f
L_76230f:
        jmp     L_762311
L_762311:
        jmp     L_762313
L_762313:
        jmp     L_762315
L_762315:
        jmp     L_762317
L_762317:
        jmp     L_762319
L_762319:
        jmp     L_76231b
L_76231b:
        jmp     L_76231d
L_76231d:
        jmp     L_76231f
L_76231f:
        jmp     L_762321
L_762321:
        jmp     L_762323
L_762323:
        jmp     L_762325
L_762325:
        jmp     L_762327
L_762327:
        jmp     L_762329
L_762329:
        jmp     L_76232b
L_76232b:
        jmp     L_76232d
L_76232d:
        jmp     L_76232f
L_76232f:
        jmp     L_762331
L_762331:
        jmp     L_762333
L_762333:
        mov     eax, 0x50
        pop     ebp
        ret
    }
}
