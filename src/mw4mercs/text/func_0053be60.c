// FUN_0053BE60 (66 bytes) — __fastcall, RET 0x14 (5 dword params).
// Fills a struct at [eax] from 5 stack params + two global constants.
extern char  DAT_007dc694;
extern short DAT_007dc696;

__declspec(naked) void func_0053be60(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x10], edx
        mov     dl, byte ptr [DAT_007dc694]
        mov     dword ptr [eax + 0x14], ecx
        mov     cx, word ptr [DAT_007dc696]
        mov     dword ptr [eax + 4], 2
        mov     byte ptr [eax + 0x18], dl
        mov     word ptr [eax + 0x1a], cx
        ret     0x14
    }
}
