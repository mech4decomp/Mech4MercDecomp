/*
 * FUN_004d0600 (142 B) — MLR network subsystem: model update wrapper
 * (__thiscall, RET 0xc). Parses a "Model" key, calls FUN_004d0100 to load
 * the model, invokes virtual methods, and computes a delta into the
 * result object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00411bf0(void);
extern void FUN_004d1f10(void);
extern void FUN_004d0100(void);
extern void FUN_004d21c0(void);

__declspec(naked) void FUN_004d0600(void)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x64]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x70]
        mov     bx, word ptr [edi + 0x2]
        push    0x1
        lea     eax, [esp + 0x74]
        push    eax
        mov     esi, ecx
        push    0x772408
        mov     ecx, ebp
        call    FUN_00411bf0
        lea     ecx, [esp + 0x20]
        call    FUN_004d1f10
        mov     ecx, dword ptr [esp + 0x70]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_004d0100
        mov     esi, dword ptr [esp + 0x68]
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x1c], edi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x18]
        mov     cx, word ptr [eax + 0x2]
        sub     cx, bx
        mov     word ptr [esi + 0x1a], cx
        lea     ecx, [esp + 0x20]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret     0xc
    }
}
