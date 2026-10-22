/*
 * func_005a30d0 - Gyro timer/trigger update
 * __thiscall: ECX = this, stack: param1 (4 bytes), param2 (float, 4 bytes)
 * RET 0x8
 */
__declspec(naked) void func_005a30d0()
{
    

extern void __cdecl FUN_00707e70(void);
__asm {
push    esi
        push    0x0
        mov     esi, ecx
        call    FUN_00707e70
        fadd    dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax + 0x5ac]
        test    ecx, ecx
        jnz     pop_and_ret
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      store_val
        fcom    qword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      pop_and_ret
    store_val:
        mov     ecx, dword ptr [esp + 0x8]
        fstp    qword ptr [esi + 0x14]
        mov     dword ptr [esi + 0x1c], ecx
        pop     esi
        ret     0x8
    pop_and_ret:
        fstp st(0)
        pop     esi
        ret     0x8
    }


}
