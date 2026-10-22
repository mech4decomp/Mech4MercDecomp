/*
 * FUN_10010010 (2032 B) - __stdcall RET 0x14. ZoneStats client config
 * loader: builds URL strings, reads log/conn settings, creates event.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_1000b210(void);
extern void __cdecl FUN_1001be90(void);
extern void __cdecl FUN_1001be70(void);
extern void __cdecl FUN_1000b7b0(void);

extern void *g_100210ec;   /* free */
extern void *g_100210f4;   /* wcslen */
extern void *g_100210f8;   /* malloc */
extern void *g_100210dc;   /* _wtoi */
extern void *g_10021134;   /* _wtoi64 */
extern void *g_100210a0;   /* ResetEvent */
extern void *g_10021030;   /* CreateEventA */
extern void *g_10021094;   /* GetSystemTime */
extern void *g_10021090;   /* SystemTimeToFileTime */
extern void *g_10021098;   /* GetLastError */

extern unsigned short g_100262f0;
extern unsigned short g_100263d4;
extern unsigned short g_10025f0c;
extern unsigned short g_10025edc;

__declspec(naked) unsigned long __cdecl FUN_10010010(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x218
        mov     ecx, dword ptr [esp + 0x228]
        push    ebx
        mov     ebx, dword ptr [esp + 0x220]
        push    ebp
        push    esi
        mov     dword ptr [ebx + 0x74], eax
        mov     eax, dword ptr [esp + 0x22c]
        lea     esi, [ebx + 0x1e4]
        mov     dword ptr [ebx + 0x78], ecx
        mov     dword ptr [ebx + 0x70], eax
        mov     ebp, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jbe     L_1005e
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L_1005e
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_1005e:
        cmp     ebp, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0xc], edi
        jz      L_10085
        cmp     word ptr [ebp], di
        jz      L_10085
        push    ebp
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    ebp
        call    FUN_100016b0
L_10085:
        mov     edx, 0x100262f0
        test    edx, edx
        jz      L_100b0
        cmp     word ptr [g_100262f0], di
        jz      L_100b0
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100262f0
        call    FUN_100016b0
L_100b0:
        mov     eax, 0x100263d4
        test    eax, eax
        jz      L_100db
        cmp     word ptr [g_100263d4], di
        jz      L_100db
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100263d4
        call    FUN_100016b0
L_100db:
        mov     eax, dword ptr [ebx + 0x70]
        test    byte ptr [eax + 0x8], 0x80
        jz      L_1013b
        mov     ebp, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ebx + 0x158]
        lea     esi, [ebx + 0x14c]
        cmp     eax, edi
        jbe     L_10107
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L_10107
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_10107:
        cmp     ebp, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0xc], edi
        jz      L_10366
        cmp     word ptr [ebp], di
        jz      L_10366
        push    ebp
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    ebp
        call    FUN_100016b0
        jmp     L_10366
L_1013b:
        mov     esi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [ebx + 0x158]
        lea     ebp, [ebx + 0x14c]
        cmp     eax, edi
        jbe     L_1015f
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_1015f
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_1015f:
        cmp     esi, edi
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        jz      L_10186
        cmp     word ptr [esi], di
        jz      L_10186
        push    esi
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    esi
        call    FUN_100016b0
L_10186:
        mov     ecx, 0x10025f0c
        test    ecx, ecx
        jz      L_10276
        cmp     word ptr [g_10025f0c], di
        jz      L_10276
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 4
        shl     eax, 1
        mov     dword ptr [esp + 0x14], eax
        jz      L_10276
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [eax + edx + 2]
        cmp     eax, ecx
        jbe     L_10237
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        add     esp, 4
        cmp     eax, edi
        mov     dword ptr [esp + 0x10], eax
        jnz     L_101ea
        mov     ecx, ebp
        call    FUN_100011a0
        jmp     L_10276
L_101ea:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_10234
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ebp]
        mov     eax, ecx
        mov     edi, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        xor     eax, eax
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, esi
        lea     edi, [esi + edx]
        mov     edx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
L_10234:
        mov     dword ptr [ebp], eax
L_10237:
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp]
        mov     ecx, eax
        add     edi, edx
        mov     edx, ecx
        mov     esi, 0x10025f0c
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        xor     edi, edi
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [eax + ecx], 0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax + 1], 0
L_10276:
        mov     ecx, 0x10025edc
        test    ecx, ecx
        jz      L_10366
        cmp     word ptr [g_10025edc], di
        jz      L_10366
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 4
        shl     eax, 1
        mov     dword ptr [esp + 0x14], eax
        jz      L_10366
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [edx + eax + 2]
        cmp     eax, ecx
        jbe     L_10327
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        add     esp, 4
        cmp     eax, edi
        mov     dword ptr [esp + 0x10], eax
        jnz     L_102da
        mov     ecx, ebp
        call    FUN_100011a0
        jmp     L_10366
L_102da:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_10324
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ebp]
        mov     eax, ecx
        mov     edi, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        xor     eax, eax
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, esi
        lea     edi, [esi + edx]
        mov     edx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
L_10324:
        mov     dword ptr [ebp], eax
L_10327:
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [ebp]
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, eax
        add     edi, edx
        mov     edx, ecx
        mov     esi, 0x10025edc
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        xor     edi, edi
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [ecx + eax], 0
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     byte ptr [edx + eax + 1], 0
L_10366:
        mov     edx, dword ptr [ebx + 0x70]
        lea     ecx, [esp + 0x28]
        push    0x100
        push    ecx
        mov     eax, dword ptr [edx + 0x10]
        push    0x10025ffc
        push    eax
        call    FUN_1000b210
        mov     esi, dword ptr [g_100210dc]
        add     esp, 0x10
        test    eax, eax
        jnz     L_1039a
        lea     ecx, [esp + 0x28]
        push    ecx
        call    esi
        add     esp, 4
        jmp     L_1039f
L_1039a:
        mov     eax, 0x7a120
L_1039f:
        mov     dword ptr [ebx + 0x11c], eax
        mov     eax, dword ptr [ebx + 0x70]
        lea     edx, [esp + 0x28]
        push    0x100
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        push    0x10025fe4
        push    ecx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_103d3
        lea     edx, [esp + 0x28]
        push    edx
        call    esi
        add     esp, 4
        jmp     L_103d8
L_103d3:
        mov     eax, 0x127500
L_103d8:
        mov     ecx, dword ptr [ebx + 0x70]
        mov     dword ptr [ebx + 0x120], eax
        lea     eax, [esp + 0x28]
        push    0x100
        mov     edx, dword ptr [ecx + 0x10]
        push    eax
        push    0x10025fd0
        push    edx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_1040c
        lea     eax, [esp + 0x28]
        push    eax
        call    esi
        add     esp, 4
        jmp     L_1040e
L_1040c:
        xor     eax, eax
L_1040e:
        mov     edx, dword ptr [ebx + 0x70]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [ebx + 0x124], eax
        push    0x100
        mov     eax, dword ptr [edx + 0x10]
        push    ecx
        push    0x10026054
        push    eax
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_10442
        lea     ecx, [esp + 0x28]
        push    ecx
        call    esi
        add     esp, 4
        jmp     L_10444
L_10442:
        xor     eax, eax
L_10444:
        mov     dword ptr [ebx + 0x128], eax
        mov     eax, dword ptr [ebx + 0x70]
        lea     edx, [esp + 0x28]
        push    0x100
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        push    0x1002603c
        push    ecx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_10478
        lea     edx, [esp + 0x28]
        push    edx
        call    esi
        add     esp, 4
        jmp     L_1047a
L_10478:
        xor     eax, eax
L_1047a:
        mov     ecx, dword ptr [ebx + 0x70]
        mov     dword ptr [ebx + 0x12c], eax
        lea     eax, [esp + 0x28]
        push    0x100
        mov     edx, dword ptr [ecx + 0x10]
        push    eax
        push    0x1002602c
        push    edx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_104ae
        lea     eax, [esp + 0x28]
        push    eax
        call    esi
        add     esp, 4
        jmp     L_104b0
L_104ae:
        xor     eax, eax
L_104b0:
        mov     edx, dword ptr [ebx + 0x70]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [ebx + 0x130], eax
        push    0x100
        mov     eax, dword ptr [edx + 0x10]
        push    ecx
        push    0x10026014
        push    eax
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_104e4
        lea     ecx, [esp + 0x28]
        push    ecx
        call    esi
        add     esp, 4
        jmp     L_104e6
L_104e4:
        xor     eax, eax
L_104e6:
        mov     dword ptr [ebx + 0x134], eax
        mov     eax, dword ptr [ebx + 0x70]
        lea     edx, [esp + 0x28]
        push    0x100
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        push    0x10026068
        push    ecx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_1051e
        lea     edx, [esp + 0x28]
        push    edx
        call    dword ptr [g_10021134]
        add     esp, 4
        jmp     L_10522
L_1051e:
        xor     eax, eax
        xor     edx, edx
L_10522:
        mov     dword ptr [ebx + 0x138], eax
        mov     eax, dword ptr [ebx + 0x70]
        mov     dword ptr [ebx + 0x13c], edx
        mov     dword ptr [ebx + 0x140], edi
        mov     dword ptr [ebx + 0x148], edi
        mov     cl, byte ptr [eax + 0x4]
        test    cl, 2
        jnz     L_106a0
        mov     esi, dword ptr [eax + 0x14]
        mov     eax, dword ptr [ebx + 0x90]
        lea     ebp, [ebx + 0x84]
        cmp     eax, edi
        jbe     L_1056d
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_1056d
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_1056d:
        cmp     esi, edi
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        jz      L_10594
        cmp     word ptr [esi], di
        jz      L_10594
        push    esi
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    esi
        call    FUN_100016b0
L_10594:
        mov     eax, 0x100262f0
        test    eax, eax
        jz      L_106a0
        cmp     word ptr [g_100262f0], di
        jz      L_106a0
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 4
        shl     eax, 1
        mov     dword ptr [esp + 0x14], eax
        jz      L_106a0
        mov     ecx, dword ptr [ebp + 0xc]
        lea     eax, [ecx + eax + 2]
        mov     ecx, dword ptr [ebp + 0x10]
        cmp     eax, ecx
        jbe     L_10661
        mov     edx, dword ptr [ebp + 0x14]
        add     eax, edx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        add     esp, 4
        cmp     eax, edi
        mov     dword ptr [esp + 0x10], eax
        jnz     L_10614
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L_10606
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_10606
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_10606:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_106a0
L_10614:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_1065e
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ebp]
        mov     eax, ecx
        mov     edi, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        xor     eax, eax
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, esi
        lea     edi, [esi + edx]
        mov     edx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
L_1065e:
        mov     dword ptr [ebp], eax
L_10661:
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp]
        mov     ecx, eax
        add     edi, edx
        mov     edx, ecx
        mov     esi, 0x100262f0
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        xor     edi, edi
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [eax + ecx], 0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax + 1], 0
L_106a0:
        mov     ecx, dword ptr [ebx + 0x74]
        mov     esi, dword ptr [g_100210a0]
        mov     eax, dword ptr [ecx + 0xc]
        cmp     eax, edi
        jz      L_106b3
        push    eax
        call    esi
L_106b3:
        mov     edx, dword ptr [esp + 0x23c]
        push    edi
        push    edi
        push    1
        push    edi
        mov     dword ptr [ebx + 0x7c], edx
        call    dword ptr [g_10021030]
        cmp     eax, edi
        mov     dword ptr [ebx + 0x80], eax
        jz      L_107ee
        push    eax
        call    esi
        mov     eax, dword ptr [ebx + 0x74]
        mov     ecx, dword ptr [ebx + 0x80]
        push    ecx
        lea     ecx, [ebx + 0x18]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        shr     edx, 2
        and     edx, 1
        push    edx
        push    eax
        call    FUN_1001be90
        cmp     eax, edi
        jnz     L_107f3
        mov     ecx, dword ptr [ebx + 0x74]
        mov     eax, dword ptr [ecx + 0x4]
        test    al, 1
        jz      L_10748
        lea     edx, [esp + 0x18]
        mov     dword ptr [ebx + 0x1c], 7
        push    edx
        call    dword ptr [g_10021094]
        lea     eax, [ebx + 0x68]
        lea     ecx, [esp + 0x18]
        push    eax
        push    ecx
        call    dword ptr [g_10021090]
        mov     edx, dword ptr [ebx]
        push    ebx
        call    dword ptr [edx + 0x10]
        mov     ecx, ebx
        call    FUN_1001be70
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x218
        ret     0x14
L_10748:
        test    al, 6
        jz      L_107dc
        mov     eax, dword ptr [ebx + 0x7c]
        mov     dword ptr [ebx + 0x1c], 7
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ebx
        call    dword ptr [edx + 0x8]
        test    al, al
        jnz     L_107a6
        mov     eax, dword ptr [ebx + 0x70]
        mov     dword ptr [ebx + 0x1c], 6
        push    2
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b7b0
        add     esp, 8
        mov     ecx, ebx
        call    FUN_1001be70
        mov     ebx, dword ptr [ebx + 0x7c]
        push    ebx
        mov     edx, dword ptr [ebx]
        call    dword ptr [edx + 0x8]
        call    dword ptr [g_10021098]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x218
        ret     0x14
L_107a6:
        lea     eax, [esp + 0x18]
        push    eax
        call    dword ptr [g_10021094]
        mov     esi, dword ptr [g_10021090]
        lea     ecx, [ebx + 0x60]
        lea     edx, [esp + 0x18]
        push    ecx
        push    edx
        call    esi
        add     ebx, 0x68
        lea     eax, [esp + 0x18]
        push    ebx
        push    eax
        call    esi
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x218
        ret     0x14
L_107dc:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0x218
        ret     0x14
L_107ee:
        mov     eax, 0x80040252
L_107f3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x218
        ret     0x14
    }
}
