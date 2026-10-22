/*
 * FUN_0x00547b20 (121 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00547b20(void)
{
    

extern void __cdecl FUN_10041271a(void);
extern void __cdecl FUN_100408490(void);
__asm {
push ecx
        mov  edx, [esp+8]
        push ebx
        push ebp
        mov  ebp, [ecx+4]
        push esi
        push edi
        mov  edi, [esp+0x1C]
        mov  eax, ebp
        sub  eax, edi
        sar  eax, 2
        test eax, eax
        mov  [esp+0x10], ecx
        mov  esi, edx
        jle  copy_remaining
        sub  edi, edx
        mov  ebx, eax
copy_loop:
        lea  eax, [edi+esi]
        push eax
        mov  ecx, esi
        call FUN_10041271a
        add  esi, 4
        dec  ebx
        jne  copy_loop
        mov  ecx, [esp+0x10]
        mov  edx, [esp+0x18]
copy_remaining:
        cmp  esi, ebp
        mov  edi, esi
        je   done
refcount_loop:
        mov  eax, [edi]
        test eax, eax
        je   next_ref
        mov  bl, [eax-1]
        dec  eax
        dec  bl
        mov  [eax], bl
        jne  next_ref
        push eax
        call FUN_100408490
        mov  ecx, [esp+0x14]
        mov  edx, [esp+0x1C]
        add  esp, 4
next_ref:
        add  edi, 4
        cmp  edi, ebp
        jne  refcount_loop
done:
        pop  edi
        mov  [ecx+4], esi
        pop  esi
        pop  ebp
        mov  eax, edx
        pop  ebx
        pop  ecx
        ret  8
    }


}
