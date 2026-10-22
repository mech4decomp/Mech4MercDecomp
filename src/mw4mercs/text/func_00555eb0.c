/*
 * FUN_0x00555eb0 (117 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00555eb0(void)
{
    

extern void __cdecl FUN_0061accb(void);
extern void __cdecl FUN_0061acf4(void);
extern void __cdecl FUN_10041fd2e(void);
extern void __cdecl FUN_005b9e06(void);
extern void __cdecl FUN_0055b49a(void);
__asm {
push   esi
        mov    esi, ecx
        push   edi
        mov    edi, dword ptr [esi+0x384]
        mov    eax, dword ptr [edi+0x10]
        shr    eax, 0x13
        test   al, 0x01
        jne    loc_555F1D

        mov    al, byte ptr [esi+0x589]
        test   al, al
        jne    loc_555F1D

        mov    al, byte ptr [esi+0x5AC]
        test   al, al
        jne    loc_555F1D

        push   0x20
        call FUN_0061accb

        mov    ecx, eax
        call FUN_0061acf4

        test   al, al
        je     loc_555F1D

        mov    ecx, dword ptr [esp+0x0C]
        mov    eax, dword ptr [ecx+0x10]
        test   eax, eax
        jle    loc_555F1D

        mov    edi, dword ptr [edi+0x3D4]
        test   edi, edi
        je     loc_555F1D

        push   1
        lea    ecx, [esi+0x6A0]
        call FUN_10041fd2e

        push   eax
        mov    ecx, edi
        call FUN_005b9e06

        test   eax, eax
        je     loc_555F1D

        push   eax
        mov    ecx, esi
        call FUN_0055b49a

loc_555F1D:
        pop    edi
        pop    esi
        ret    4
    }


}
