/*
 * FUN_005fd290 (109 B) — __thiscall, recursive. Walks a linked list
 * (this->[0xbc]) and, for each node whose FUN_00415230 check passes,
 * recurses; finally stores (arg & 0xff) into this->[0x210].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f26a4;

extern void __cdecl FUN_004f93d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005fd290(void);

__declspec(naked) void FUN_005fd290(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    ebp
        push    esi
        mov     esi, dword ptr [g_007dab40]
        mov     ebp, ecx
        xor     eax, esi
        mov     ecx, dword ptr [eax+0x20]
        push    edi
        mov     edi, dword ptr [ebp+0xbc]
        xor     ecx, 0x85739531
        call    FUN_004f93d0
        test    al, al
        jz      L_2f7
        push    ebx
        mov     ebx, dword ptr [esp+0x14]
L_2c1:
        test    edi, edi
        jz      L_2ea
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi+4]
        jz      L_2ea
        mov     eax, dword ptr [g_007f26a4]
        mov     ecx, dword ptr [esi+4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_2c1
        push    ebx
        mov     ecx, esi
        call    FUN_005fd290
        jmp     L_2c1
L_2ea:
        and     ebx, 0xff
        mov     dword ptr [ebp+0x210], ebx
        pop     ebx
L_2f7:
        pop     edi
        pop     esi
        pop     ebp
        ret     4
    }
}
