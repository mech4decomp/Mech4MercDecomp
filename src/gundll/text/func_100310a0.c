/*
 * FUN_100310a0 (227 B) — __thiscall, RET 0xc.
 * Object constructor with SEH frame. Sets up vtables at [ESI], [ESI+4],
 * [ESI+8], [ESI+0x40] and calls FUN_100343e0 + two vtable methods.
 * Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100343e0(void);

__declspec(naked) void FUN_100310a0(void)
{
    __asm {
        push    -0x1
        push    0x100489ab
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x24]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edi
        xor     ebx, ebx
        push    ebp
        lea     edi, [esi + 0x40]
        push    edi
        mov     dword ptr [esi], 0x1004b010
        mov     dword ptr [esi + 0x4], 0x1004af10
        mov     dword ptr [esi + 0x8], 0x1004af0c
        push    ebx
        mov     dword ptr [esi + 0x14], ecx
        push    esi
        lea     ecx, [edi + 0x4]
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [esi + 0x1c], ebx
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     byte ptr [esi + 0x30], bl
        mov     dword ptr [esi + 0x3c], ebx
        push    ebx
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [edi], 0x1004aff8
        mov     dword ptr [esp + 0x3c], ecx
        call    FUN_100343e0
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [edi], 0x1004afe0
        mov     dword ptr [edx], 0x1004afdc
        mov     eax, dword ptr [esp + 0x24]
        mov     byte ptr [esi + 0x6c], bl
        mov     dword ptr [esi + 0x70], ebx
        mov     dword ptr [esi + 0x74], ebx
        mov     dword ptr [esi + 0x78], ebx
        mov     dword ptr [esi], 0x1004af90
        mov     dword ptr [esi + 0x4], 0x1004af8c
        mov     dword ptr [esi + 0x8], 0x1004af88
        mov     dword ptr [esi + 0x34], 0x1
        mov     dword ptr [esi + 0x38], esi
        mov     ecx, dword ptr [eax]
        push    eax
        mov     dword ptr [esp + 0x20], ebx
        call    dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ebp]
        push    ebp
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0xc
    }
}
