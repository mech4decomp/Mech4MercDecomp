/*
 * func_00505320 - 101 bytes
 * Constructor - initializes object with vtable and fields
 */
__declspec(naked) void func_00505320()
{
    

extern void __cdecl FUN_1004084c2(void);
extern void __cdecl FUN_00505592(void);
__asm {
push    esi
        mov     esi, ecx
        push    0x14
        mov     dword ptr [esi + 0x14], 0
        mov     dword ptr [esi + 0x0C], 5
        call FUN_1004084c2
        mov     edx, [esp + 0x18]
        xor     ecx, ecx
        mov     [eax], ecx
        mov     [eax + 4], ecx
        mov     [eax + 8], ecx
        mov     [eax + 0x0C], ecx
        mov     [eax + 0x10], ecx
        mov     ecx, [esp + 0x10]
        add     esp, 4
        mov     [esi + 0x14], eax
        mov     eax, [esp + 0x10]
        push    eax
        mov     [esi + 0x20], edx
        mov     edx, [esp + 0x0C]
        push    ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], 0
        mov     dword ptr [esi], 0x00776E94
        call FUN_00505592
        mov     eax, [esp + 0x18]
        mov     [esi + 0x24], eax
        mov     eax, esi
        pop     esi
        ret     0x14
    }


}
