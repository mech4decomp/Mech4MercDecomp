/*
 * FUN_10012570 (1385 B) - __stdcall RET 0xc. Query client config loader:
 * builds URL strings, reads query/log settings, creates events.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_1000b210(void);
extern void __cdecl FUN_1001be90(void);

extern void *g_100210ec;   /* free */
extern void *g_100210f4;   /* wcslen */
extern void *g_100210f8;   /* malloc */
extern void *g_100210dc;   /* _wtoi */
extern void *g_10021134;   /* _wtoi64 */
extern void *g_10021030;   /* CreateEventA */
extern void *g_100210a0;   /* ResetEvent */

extern unsigned short g_100262f0;
extern unsigned short g_10026644;
extern unsigned short g_10025f0c;
extern unsigned short g_10025edc;

__declspec(naked) unsigned long __cdecl FUN_10012570(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x208
        push    ebx
        mov     ebx, dword ptr [esp + 0x210]
        push    ebp
        push    esi
        mov     dword ptr [ebx + 0x68], eax
        mov     eax, dword ptr [esp + 0x21c]
        lea     esi, [ebx + 0x168]
        mov     dword ptr [ebx + 0x64], eax
        mov     ebp, dword ptr [eax + 0x10]
        push    edi
        mov     eax, dword ptr [esi + 0xc]
        xor     edi, edi
        cmp     eax, edi
        jbe     L_125b4
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L_125b4
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_125b4:
        cmp     ebp, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0xc], edi
        jz      L_125df
        cmp     word ptr [ebp], di
        jz      L_125df
        mov     edi, dword ptr [g_100210f4]
        push    ebp
        call    edi
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    ebp
        call    FUN_100016b0
        jmp     L_125e5
L_125df:
        mov     edi, dword ptr [g_100210f4]
L_125e5:
        mov     ecx, 0x100262f0
        test    ecx, ecx
        jz      L_1260d
        cmp     word ptr [g_100262f0], 0
        jz      L_1260d
        push    ecx
        call    edi
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100262f0
        call    FUN_100016b0
L_1260d:
        mov     edx, 0x10026644
        test    edx, edx
        jz      L_12635
        cmp     word ptr [g_10026644], 0
        jz      L_12635
        push    edx
        call    edi
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x10026644
        call    FUN_100016b0
L_12635:
        mov     eax, dword ptr [ebx + 0x64]
        test    byte ptr [eax + 0x8], 0x80
        jz      L_12693
        mov     ebp, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ebx + 0xdc]
        lea     esi, [ebx + 0xd0]
        test    eax, eax
        jbe     L_12661
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_12661
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_12661:
        xor     eax, eax
        cmp     ebp, eax
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0xc], eax
        jz      L_128c0
        cmp     word ptr [ebp], ax
        jz      L_128c0
        push    ebp
        call    edi
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    ebp
        call    FUN_100016b0
        jmp     L_128c0
L_12693:
        mov     esi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [ebx + 0xdc]
        lea     ebp, [ebx + 0xd0]
        test    eax, eax
        jbe     L_126b7
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L_126b7
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_126b7:
        xor     eax, eax
        cmp     esi, eax
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [ebp + 0xc], eax
        jz      L_126dc
        cmp     word ptr [esi], ax
        jz      L_126dc
        push    esi
        call    edi
        add     esp, 4
        mov     ecx, ebp
        shl     eax, 1
        push    eax
        push    esi
        call    FUN_100016b0
L_126dc:
        mov     eax, 0x10025f0c
        test    eax, eax
        jz      L_127d1
        cmp     word ptr [g_10025f0c], 0
        jz      L_127d1
        push    eax
        call    edi
        mov     esi, eax
        add     esp, 4
        shl     esi, 1
        mov     dword ptr [esp + 0x10], esi
        jz      L_127d1
        mov     ecx, dword ptr [ebp + 0xc]
        lea     eax, [ecx + esi + 2]
        mov     ecx, dword ptr [ebp + 0x10]
        cmp     eax, ecx
        jbe     L_1278e
        mov     edx, dword ptr [ebp + 0x14]
        add     eax, edx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     edx, eax
        add     esp, 4
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jnz     L_12741
        mov     ecx, ebp
        call    FUN_100011a0
        jmp     L_127d1
L_12741:
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        jbe     L_1278b
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
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        add     esp, 4
L_1278b:
        mov     dword ptr [ebp], edx
L_1278e:
        mov     edi, dword ptr [ebp]
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, esi
        add     edi, edx
        mov     edx, ecx
        mov     esi, 0x10025f0c
        shr     ecx, 2
        rep movsd
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [g_100210f4]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [ecx + eax], 0
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     byte ptr [edx + eax + 1], 0
L_127d1:
        mov     ecx, 0x10025edc
        test    ecx, ecx
        jz      L_128c0
        cmp     word ptr [g_10025edc], 0
        jz      L_128c0
        push    ecx
        call    edi
        mov     esi, eax
        add     esp, 4
        shl     esi, 1
        mov     dword ptr [esp + 0x10], esi
        jz      L_128c0
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [edx + esi + 2]
        cmp     eax, ecx
        jbe     L_12883
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     edx, eax
        add     esp, 4
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jnz     L_12836
        mov     ecx, ebp
        call    FUN_100011a0
        jmp     L_128c0
L_12836:
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        jbe     L_12880
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
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        add     esp, 4
L_12880:
        mov     dword ptr [ebp], edx
L_12883:
        mov     edi, dword ptr [ebp]
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, esi
        add     edi, edx
        mov     edx, ecx
        mov     esi, 0x10025edc
        shr     ecx, 2
        rep movsd
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [ecx + eax], 0
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     byte ptr [edx + eax + 1], 0
L_128c0:
        mov     edx, dword ptr [ebx + 0x64]
        lea     ecx, [esp + 0x18]
        push    0x100
        push    ecx
        mov     eax, dword ptr [edx + 0x10]
        push    0x10025f40
        push    eax
        call    FUN_1000b210
        mov     esi, dword ptr [g_100210dc]
        add     esp, 0x10
        test    eax, eax
        jnz     L_128f4
        lea     ecx, [esp + 0x18]
        push    ecx
        call    esi
        add     esp, 4
        jmp     L_128f6
L_128f4:
        xor     eax, eax
L_128f6:
        mov     dword ptr [ebx + 0xa0], eax
        mov     eax, dword ptr [ebx + 0x64]
        lea     edx, [esp + 0x18]
        push    0x100
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        push    0x10025f70
        push    ecx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_1292a
        lea     edx, [esp + 0x18]
        push    edx
        call    esi
        add     esp, 4
        jmp     L_1292c
L_1292a:
        xor     eax, eax
L_1292c:
        mov     ecx, dword ptr [ebx + 0x64]
        mov     dword ptr [ebx + 0xa4], eax
        lea     eax, [esp + 0x18]
        push    0x100
        mov     edx, dword ptr [ecx + 0x10]
        push    eax
        push    0x10025f54
        push    edx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_12960
        lea     eax, [esp + 0x18]
        push    eax
        call    esi
        add     esp, 4
        jmp     L_12962
L_12960:
        xor     eax, eax
L_12962:
        mov     edx, dword ptr [ebx + 0x64]
        lea     ecx, [esp + 0x18]
        mov     dword ptr [ebx + 0xa8], eax
        push    0x100
        mov     eax, dword ptr [edx + 0x10]
        push    ecx
        push    0x10025f2c
        push    eax
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_12996
        lea     ecx, [esp + 0x18]
        push    ecx
        call    esi
        add     esp, 4
        jmp     L_12998
L_12996:
        xor     eax, eax
L_12998:
        mov     dword ptr [ebx + 0xac], eax
        mov     eax, dword ptr [ebx + 0x64]
        lea     edx, [esp + 0x18]
        push    0x100
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        push    0x10025f10
        push    ecx
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_129cc
        lea     edx, [esp + 0x18]
        push    edx
        call    esi
        add     esp, 4
        jmp     L_129ce
L_129cc:
        xor     eax, eax
L_129ce:
        mov     ecx, dword ptr [ebx + 0x64]
        mov     dword ptr [ebx + 0xb0], eax
        lea     eax, [esp + 0x18]
        push    0x100
        mov     edx, dword ptr [ecx + 0x10]
        push    eax
        push    0x10025f9c
        push    edx
        call    FUN_1000b210
        mov     esi, dword ptr [g_10021134]
        add     esp, 0x10
        test    eax, eax
        jnz     L_12a08
        lea     eax, [esp + 0x18]
        push    eax
        call    esi
        add     esp, 4
        jmp     L_12a0c
L_12a08:
        xor     eax, eax
        xor     edx, edx
L_12a0c:
        mov     dword ptr [ebx + 0xb8], eax
        mov     dword ptr [ebx + 0xbc], edx
        mov     edx, dword ptr [ebx + 0x64]
        lea     ecx, [esp + 0x18]
        push    0x100
        push    ecx
        mov     eax, dword ptr [edx + 0x10]
        push    0x10025f84
        push    eax
        call    FUN_1000b210
        add     esp, 0x10
        test    eax, eax
        jnz     L_12a46
        lea     ecx, [esp + 0x18]
        push    ecx
        call    esi
        add     esp, 4
        jmp     L_12a4a
L_12a46:
        xor     eax, eax
        xor     edx, edx
L_12a4a:
        mov     esi, dword ptr [g_10021030]
        push    0
        push    0
        push    1
        mov     dword ptr [ebx + 0xc0], eax
        push    0
        mov     dword ptr [ebx + 0xc4], edx
        mov     dword ptr [ebx + 0xcc], 0
        call    esi
        test    eax, eax
        mov     dword ptr [ebx + 0x98], eax
        jz      L_12ac7
        mov     ebp, dword ptr [g_100210a0]
        push    eax
        call    ebp
        push    0
        push    0
        push    1
        push    0
        call    esi
        test    eax, eax
        mov     dword ptr [ebx + 0x9c], eax
        jz      L_12ac7
        push    eax
        call    ebp
        mov     eax, dword ptr [ebx + 0x68]
        mov     edx, dword ptr [ebx + 0x9c]
        push    edx
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        shr     ecx, 2
        and     ecx, 1
        push    ecx
        push    edx
        lea     ecx, [ebx + 0x18]
        call    FUN_1001be90
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x208
        ret     0xc
L_12ac7:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040252
        pop     ebx
        add     esp, 0x208
        ret     0xc
    }
}
