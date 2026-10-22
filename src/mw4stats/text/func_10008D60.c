/* FUN_10008d60 - __thiscall, ECX=this, param_1=[esp+4], param_2=[esp+8], param_3=[esp+0xc]
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10008d60 (49 B, __thiscall, ECX = this, 3 stack params, ret 0xc).
 * Forwards to this->f4->vtable[0] with 8 args:
 * (f4, 0xffffd8f4, fc, f10, &g_str_100258e8, p3, p2, p1)
 * CFLAGS: /O2
 */

extern char g_str_100258e8;

void __declspec(naked) FUN_10008d60(void)
{
    __asm {
        push esi
        mov  esi, dword ptr [esp + 0x8]
        mov  eax, dword ptr [ecx + 0x4]
        push esi
        mov  esi, dword ptr [esp + 0x10]
        mov  edx, dword ptr [eax]
        push esi
        mov  esi, dword ptr [esp + 0x18]
        push esi
        mov  esi, dword ptr [ecx + 0x10]
        mov  ecx, dword ptr [ecx + 0xc]
        push offset g_str_100258e8
        push esi
        push ecx
        push 0xffffd8f4
        push eax
        call dword ptr [edx]
        add  esp, 0x20
        pop  esi
        ret  0xc
    }
}
