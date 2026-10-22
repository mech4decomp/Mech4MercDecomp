/*
 * data_00513f1f.c block (util) -- 324 bytes. Two methods that allocate a
 * buffer (FUN_006F3C80), build a string via several string-append calls,
 * and copy it into a global object (0x7dab44 XOR 0x7dab40 / 0x85739531).
 * The second also trims trailing bytes and frees buffers via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_006F3C80(void);
extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_004CC9F0(void);
extern void __cdecl FUN_00544680(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004129C0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_00514800(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        je      L514815
        push    eax
        call    FUN_006F4230
L514815:
        push    0
        push    0x80
        call    FUN_006F3C80
        mov     ecx, dword ptr [g_7dab44]
        mov     edi, dword ptr [g_7dab40]
        mov     ebx, eax
        mov     eax, dword ptr [ecx]
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     dword ptr [esi], ebx
        call    FUN_004CC9F0
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     0xc
        nop
        nop
        nop
        sub     esp, 8
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (C7 04 24 vs ref C7 44 24 00) */
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        push    esi
        push    edi
        xor     ecx, 0x85739531
        call    FUN_00544680
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        lea     ecx, [esp + 0xc]
        call    FUN_004129C0
        mov     ecx, eax
        call    FUN_00412950
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [ecx]
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L5148D0
        push    eax
        call    FUN_006F4230
L5148D0:
        push    0
        push    0x80
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     dword ptr [esi], edx
        mov     edi, dword ptr [esp + 8]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop     edi
        pop     esi
        je      L51491E
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L51491E
        push    eax
        call    FUN_004084E0
        add     esp, 4
L51491E:
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (8B 04 24 vs ref 8B 44 24 00) */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        je      L514939
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L514939
        push    eax
        call    FUN_004084E0
        add     esp, 4
L514939:
        mov     eax, 1
        add     esp, 8
        ret     0xc
    }
}
