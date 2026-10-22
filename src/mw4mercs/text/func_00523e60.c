// FUN_00523E60 (23 bytes)
// mov eax, ecx; mov ecx, [esp+4]; mov dx, [ecx]; mov cx, [ecx+2]; mov [eax], dx; mov [eax+2], cx; ret 4
// __fastcall-style: ecx = this/dest, stack = source ptr.
// Copies 4 bytes from source to dest (two 16-bit moves).
__declspec(naked) void func_00523e60(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dx, word ptr [ecx]
        mov cx, word ptr [ecx + 2]
        mov word ptr [eax], dx
        mov word ptr [eax + 2], cx
        ret 4
    }
}
