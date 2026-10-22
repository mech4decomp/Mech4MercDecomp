/*
 * func_005a3090 - Gyro update/check function
 * __fastcall: ECX = param_1 (this)
 * Compares a value against a double, conditionally stores a pointer
 */
__declspec(naked) void func_005a3090()
{
    

extern void __cdecl FUN_00707e70(void);
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x1c]
        test    edi, edi
        jz      done
        push    0x0
        call    FUN_00707e70
        fcomp   qword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jnz     done
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 0x7
        cmp     eax, 0x4
        jz      store_val
        test    eax, eax
        jnz     done
    store_val:
        mov     dword ptr [ecx + 0x5ac], edi
        mov     dword ptr [esi + 0x1c], 0x0
    done:
        pop     edi
        pop     esi
        ret
    }


}
