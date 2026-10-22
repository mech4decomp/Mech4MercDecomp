/*
 * FUN_1002f850 (201 B) -- __thiscall, RET 0xC.
 * Object constructor with SEH frame. Sets up vtable pointers, stores params,
 * allocates a list node via FUN_10001d50, calls virtual methods on the two
 * stored objects, then FUN_100303e0(this, 0). Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_100303e0(void);

__declspec(naked) void FUN_1002f850(void)
{
    __asm {
        push    -1
        push    0x100488db
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esi], 0x1004af18
        mov     dword ptr [esi + 0x4], 0x1004af10
        mov     dword ptr [esi + 0x8], 0x1004af0c
        mov     dword ptr [esi + 0x10], eax
        mov     al, byte ptr [esp + 0x1c]
        xor     ebx, ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [esi + 0x18], edx
        push    0xc
        mov     dword ptr [esp + 0xc], esi
        mov     byte ptr [esi + 0x1c], al
        call    FUN_10001d50
        mov     dword ptr [eax], eax
        mov     dword ptr [eax + 0x4], eax
        add     esp, 0x4
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], ebx
        mov     eax, dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x44], ebx
        mov     byte ptr [esi + 0x48], bl
        mov     dword ptr [esi + 0x50], ebx
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esi], 0x1004aeb8
        mov     dword ptr [esi + 0x4], 0x1004aeb0
        mov     dword ptr [esi + 0x8], 0x1004aeac
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [esi + 0x40], esi
        mov     ecx, dword ptr [eax]
        push    eax
        mov     dword ptr [esp + 0x18], ebx
        call    dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x4]
        push    ebx
        push    esi
        call    FUN_100303e0
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0xc
    }
}
