/*
 * FUN_0x0054e910 (120 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0054e910(void)
{
    

extern void __cdecl FUN_10054e892(void);
extern void __cdecl FUN_100417a72(void);
__asm {
sub  esp, 0xC
        mov  eax, [esp+0x14]
        push esi
        push edi
        mov  esi, ecx
        mov  ecx, [esp+0x18]
        push eax
        push ecx
        mov  ecx, esi
        call FUN_10054e892
        lea  eax, [esi+0x2F0]
        mov  [esp+0xC], eax
        mov  eax, [eax]
        test eax, eax
        mov  [esp+0x10], eax
        mov  dword ptr [esp+8], 0x0077D010
        je   done
        mov  edi, [eax]
        test edi, edi
        je   done
        mov  ecx, [esi+0x2F8]
        mov  eax, [edi+0x10]
        dec  ecx
        cmp  eax, 1
        mov  [esi+0x2F8], ecx
        jne  skip_vcall
        mov  ecx, [esi+0x384]
        mov  edx, [ecx]
        push 1
        call dword ptr [edx+0x118]
skip_vcall:
        lea  ecx, [esp+8]
        call FUN_100417a72
        mov  eax, [edi]
        push 1
        mov  ecx, edi
        call dword ptr [eax]
done:
        pop  edi
        pop  esi
        add  esp, 0xC
        ret  8
    }


}
