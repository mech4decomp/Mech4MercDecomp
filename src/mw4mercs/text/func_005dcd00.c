/*
 * FUN_005DCD00 (64 B) — If param is nonempty string, dispatch virtual method
 * +0xac on this, then call FUN_00416130(param). If empty string, dispatch
 * virtual method +0xb0 then FUN_00416130(param).
 *
 * __thiscall (ECX = this), one stack param, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00416130(void *arg);

__declspec(naked) void __stdcall FUN_005DCD00(void *param)
{
    

extern int DAT_007f24cc;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      done
        cmp     byte ptr [esi], 0x0
        jz      L27
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0xac]
        mov ecx, dword ptr [DAT_007f24cc]
        push    esi
        call    FUN_00416130
        pop     esi
        ret     4
L27:
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0xb0]
        mov ecx, dword ptr [DAT_007f24cc]
        push    esi
        call    FUN_00416130
done:
        pop     esi
        ret     4
    }


}
