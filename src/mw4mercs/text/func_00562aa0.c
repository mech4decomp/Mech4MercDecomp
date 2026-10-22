// 0x00562AA0: copies 5 bytes (dword + byte) from two sources
// __fastcall (this in ecx) with 2 stack params
// ret 8

__declspec(naked) void __fastcall func_00562aa0(void *this, int dummy, void *src1, void *src2)
{
    __asm {
        mov eax, ecx          // save this ptr
        mov ecx, dword ptr [esp + 4]  // src1
        mov edx, dword ptr [ecx]      // load dword from src1
        mov ecx, dword ptr [esp + 8]  // src2
        mov dword ptr [eax], edx      // store dword to this
        mov dl, byte ptr [ecx]        // load byte from src2
        mov byte ptr [eax + 4], dl    // store byte to this+4
        ret 8
    }
}
