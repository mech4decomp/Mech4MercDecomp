/*
 * FUN_100343e0 (133 B) - __thiscall, RET 0x14. Object constructor with
 * SEH prologue; initializes fields, allocates a list node via FUN_10001d50,
 * sets vtable 0x1004b220, calls FUN_10034570.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __cdecl FUN_10034570(void);   /* rel32 call */

__declspec(naked) void FUN_100343e0(void)
{
    __asm {
        push    -0x1
        push    0x10048aab
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esp + 0x28]
        push    edi
        mov     dword ptr [esi + 0x10], ecx
        mov     cl, byte ptr [esp + 0x28]
        xor     edi, edi
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi + 0x14], edx
        mov     dword ptr [esi + 0x18], eax
        push    0xc
        mov     dword ptr [esp + 0xc], esi
        mov     byte ptr [esi + 0x1c], cl
        call    FUN_10001d50
        mov     dword ptr [eax], eax
        mov     dword ptr [eax + 0x4], eax
        add     esp, 0x4
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], edi
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esi], 0x1004b220
        call    FUN_10034570
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x14
    }
}
