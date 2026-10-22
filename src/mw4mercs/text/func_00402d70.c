/*
 * FUN_00402d70 (235 B) - Initializes a game-list filter buffer, copies a
 * string into it, or falls back to a versioned object call. __stdcall, 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040de20(void);

extern int  *g_76b420;   /* IAT */
extern int  g_7b7dd0;
extern int  g_7dab44;
extern int  g_7dab40;

__declspec(naked) void FUN_00402d70(void)
{
    __asm {
        mov     eax, dword ptr [g_7b7dd0]
        sub     esp, 0x54
        test    eax, eax
        jz      L_402d8c
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_7b7dd0], 0
L_402d8c:
        push    esi
        push    0
        push    0x100
        call    FUN_006f3c80
        push    1
        push    0
        push    0x77826c
        lea     ecx, [esp + 0x14]
        mov     dword ptr [g_7b7dd0], eax
        call    FUN_0040dca0
        push    0x778288
        lea     ecx, [esp + 0xc]
        call    FUN_0040eda0
        push    0
        lea     ecx, [esp + 8]
        push    ecx
        push    0x778300
        mov     ecx, eax
        call    FUN_00411bf0
        test    al, al
        jz      L_402dfe
        or      ecx, 0xffffffff
        push    edi
        mov     edi, dword ptr [esp + 8]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [g_7b7dd0]
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        jmp     L_402e40
L_402dfe:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        lea     eax, [ecx + 0xc]
        mov     ecx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0xb0]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        push    0x754f
        call    dword ptr [edx + 0x34]
        push    eax
        mov     eax, dword ptr [g_7b7dd0]
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0xc
L_402e40:
        lea     ecx, [esp + 8]
        call    FUN_0040e4a0
        lea     ecx, [esp + 8]
        call    FUN_0040de20
        xor     eax, eax
        pop     esi
        add     esp, 0x54
        ret     0xc
    }
}
