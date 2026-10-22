/*
 * FUN_004DF9C0 (24 B) — Init struct: this[0]=0, this[1]=0, this[2]=0,
 * byte[this+8] = *param.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: src byte).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004df9c0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 8], dl
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret     4
    }
}
