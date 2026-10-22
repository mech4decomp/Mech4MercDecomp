/*
 * FUN_005a6ae0 (97 B) — Update function with FPU addition.
 *
 * Calls FUN_005f07c0, does virtual dispatch, conditionally calls
 * FUN_005f0820, and adds a float to a field.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_005f07c0(void);
extern int __cdecl FUN_005fbe90(int param);
extern int __cdecl FUN_005f0820(void);

__declspec(naked) int __cdecl FUN_005a6ae0(void)
{
    
__asm {
push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005f07c0
        mov     edi, eax
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        mov     dword ptr [esi + 0x1b0], edi
        call    dword ptr [eax + 4]
        mov     ebp, eax
        mov     ecx, dword ptr [ebp + 0x648]
        push    ecx
        mov     ecx, edi
        xor     bl, bl
        call    FUN_005fbe90
        test    al, al
        jz      return_false
        mov     ecx, esi
        call    FUN_005f0820
        test    al, al
        jz      done
        fld     dword ptr [ebp + 0x648]
        mov     esi, dword ptr [esi + 0x1b0]
        fadd    dword ptr [esi + 0x3b8]
        pop     edi
        fstp    dword ptr [esi + 0x3b8]
        pop     esi
        pop     ebp
        pop     ebx
        ret
return_false:
        mov     al, bl
done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }


}
