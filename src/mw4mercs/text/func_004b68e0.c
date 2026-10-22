/*
 * FUN_004b68e0 (293 B) — MLR element constructor (__thiscall, 4 args).
 * Calls base ctor FUN_004bede0, sets vtable 0x770960, reads several
 * fields from the object at arg2 via virtual vtable[8] calls, and
 * initializes a set of color/flag fields (this+0x150..0x160, +0x1c,
 * +0x130..0x13c) from lookup tables 0x7b3490/0x7b34b0 and globals
 * 0x7b34a0/0x7b34a4/0x7b34a8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b3490[];
extern int g_007b34a0;
extern int g_007b34a4;
extern int g_007b34a8;
extern int g_007b34b0[];
extern void __cdecl FUN_004bede0(void);

__declspec(naked) void FUN_004b68e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    0x1
        push    eax
        push    ebx
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004bede0
        cmp     ebx, 0xb
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi], 0x770960
        jl      L_692F
        push    0x1
        lea     eax, [esi + 0x150]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esi + 0x151]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        jmp     L_695D
    L_692F:
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     dl, byte ptr [esp + 0x1c]
        mov     al, byte ptr [esp + 0x18]
        mov     byte ptr [esi + 0x150], dl
        mov     byte ptr [esi + 0x151], al
    L_695D:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x154]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x158]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x15c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x160]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, eax
        shr     edx, 0x2
        and     edx, 0x1
        mov     ecx, eax
        and     ecx, 0xc0
        shl     edx, 0x1
        sub     cl, 0x80
        neg     cl
        pop     edi
        sbb     ecx, ecx
        inc     ecx
        or      edx, ecx
        mov     edx, dword ptr [edx*4 + g_007b3490]
        mov     ecx, dword ptr [g_007b34a0]
        mov     dword ptr [esi + 0x1c], edx
        mov     edx, dword ptr [g_007b34a4]
        shr     eax, 0xa
        and     eax, 0x1
        mov     dword ptr [esi + 0x130], ecx
        mov     ecx, dword ptr [g_007b34a8]
        mov     dword ptr [esi + 0x134], edx
        mov     edx, dword ptr [eax*4 + g_007b34b0]
        mov     dword ptr [esi + 0x138], ecx
        mov     dword ptr [esi + 0x13c], edx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
