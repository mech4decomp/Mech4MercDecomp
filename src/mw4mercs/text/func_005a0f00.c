/*
 * FUN_005a0f00 (53 B) — __thiscall function with 1 stack param. Initializes
 * several fields to 0, calls FUN_00707e70, and stores the result as double.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00707e70(int param);

void __declspec(naked) __cdecl FUN_005a0f00(void)
{
    
__asm {
push    esi
        push    edi
        xor     edi, edi
        mov     esi, ecx

        push    edi
        mov     dword ptr [esi + 0x514], edi
        mov     dword ptr [esi + 0x528], edi
        call    FUN_00707e70

        fstp    qword ptr [esi + 0x52c]

        mov     dword ptr [esi + 0x534], edi
        mov     dword ptr [esi + 0x538], edi
        mov     dword ptr [esi + 0x53c], edi

        pop     edi
        pop     esi
        ret     0x4
    }


}
