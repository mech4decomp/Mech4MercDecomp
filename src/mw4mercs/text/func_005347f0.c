// FUN_005347F0 (131 bytes)
// __thiscall struct initializer, RET 0x2c (callee-cleanup)
// Copies params into struct fields at [this+0x00..0x5c]
__declspec(naked) void func_005347f0(void)
{
    

extern int DAT_007dc696;
extern int DAT_007dc694;
__asm {
mov     edx, dword ptr [esp + 0x08]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x04]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x0c]
        mov     dword ptr [eax + 0x0c], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x08], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x14], ecx
        mov cx, word ptr [DAT_007dc696]
        mov     word ptr [eax + 0x1a], cx
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x10], edx
        mov dl, byte ptr [DAT_007dc694]
        push    edi
        mov     byte ptr [eax + 0x18], dl
        mov     edx, dword ptr [esp + 0x2c]
        lea     edi, [eax + 0x1c]
        mov     ecx, 0x0c
        mov     dword ptr [eax + 0x04], 0x02
        rep movsd
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 0x50], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x4c], edx
        mov     dx, word ptr [ecx]
        mov     cx, word ptr [ecx + 0x02]
        mov     word ptr [eax + 0x54], dx
        mov     edx, dword ptr [esp + 0x34]
        mov     word ptr [eax + 0x56], cx
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        mov     dword ptr [eax + 0x58], edx
        mov     dword ptr [eax + 0x5c], ecx
        pop     esi
        ret     0x2c
    }


}
