/*
 * FUN_004d6240 (145 B) — __thiscall. Resolves an obfuscated global
 * (DAT_007dab44 ^ DAT_007dab40 -> +0x1c -> ^0x85739531) and makes a
 * virtual call; then registers param_1 into this->field4c via
 * FUN_004164b0, allocating a 0x18-byte object (FUN_004d5f40) on miss.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007dc12c;
extern void __cdecl FUN_004ceca0(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004d5f40(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00416470(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004d6240(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x10]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx+0x1c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        lea     ebx, [esi+0x74]
        call    dword ptr [edx+0x2c]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x38]
        mov     ecx, dword ptr [esi+0x18]
        push    esi
        call    FUN_004ceca0
        lea     ebp, [edi+0x4c]
        push    ebx
        mov     ecx, ebp
        call    FUN_004164b0
        mov     edi, eax
        test    edi, edi
        jnz     L_62c1
        mov     ecx, dword ptr [g_007dc12c]
        push    ecx
        call    FUN_006f4950
        push    0x18
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_62b1
        mov     ecx, eax
        call    FUN_004d5f40
        mov     edi, eax
        jmp     L_62b3
L_62b1:
        xor     edi, edi
L_62b3:
        call    FUN_006f49a0
        push    ebx
        push    edi
        mov     ecx, ebp
        call    FUN_00416470
L_62c1:
        push    esi
        lea     ecx, [edi+0x10]
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
