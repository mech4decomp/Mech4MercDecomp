/*
 * FUN_00512060 (90 B) — Destructor-like function
 * Decrements reference counts and frees memory
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00512060(void)
{
    

extern void __cdecl FUN_1004084ca(void);
extern void __cdecl FUN_1004084b0(void);
extern void __cdecl FUN_100415346(void);
extern void __cdecl FUN_100408499(void);
__asm {
push esi
        mov  esi, ecx
        mov  dword ptr [esi], 0x779a84
        mov  eax, [esi+0x14]
        test eax, eax
        jz   skip_free1
        mov  cl, [eax-1]
        dec  eax
        dec  cl
        mov  [eax], cl
        jnz  skip_free1
        push eax
        call FUN_1004084ca
        add  esp, 4
skip_free1:
        mov  eax, [esi+0x10]
        test eax, eax
        jz   skip_free2
        mov  cl, [eax-1]
        dec  eax
        dec  cl
        mov  [eax], cl
        jnz  skip_free2
        push eax
        call FUN_1004084b0
        add  esp, 4
skip_free2:
        mov  ecx, esi
        call FUN_100415346
        test byte ptr [esp+8], 1
        jz   skip_delete
        push esi
        call FUN_100408499
        add  esp, 4
skip_delete:
        mov  eax, esi
        pop  esi
        ret  4
    }


}
