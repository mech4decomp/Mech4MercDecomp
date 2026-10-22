/*
 * FUN_004b6a30 (239 B) — MLR element constructor variant (__thiscall,
 * 7 args). Calls base ctor FUN_004bf010, stores args 3/4 at this+0x15c/
 * 0x160, computes two FPU ratios (arg5/(arg1&0xff), arg6/(arg2&0xff))
 * stored at this+0x154/0x158, sets vtable 0x770960, calls FUN_004b6d80,
 * and initializes the color/flag fields from tables 0x7b3490/0x7b34b0
 * and globals 0x7b34a0/0x7b34a4/0x7b34a8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b3490[];
extern int g_007b34a0;
extern int g_007b34a4;
extern int g_007b34a8;
extern int g_007b34b0[];
extern void __cdecl FUN_004bf010(void);
extern void __cdecl FUN_004b6d80(void);

__declspec(naked) void FUN_004b6a30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004bf010
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x15c], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x160], edx
        mov     edx, eax
        and     edx, 0xff
        mov     dword ptr [esp + 0x20], edx
        fild    dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, ecx
        and     edx, 0xff
        fdivr   dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x20], edx
        mov     byte ptr [esi + 0x150], al
        mov     byte ptr [esi + 0x151], cl
        movzx   cx, cl
        movzx   ax, al
        mov     dword ptr [esi], 0x770960
        fstp    dword ptr [esi + 0x154]
        imul    eax, ecx
        fild    dword ptr [esp + 0x20]
        fdivr   dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     word ptr [esi + 0x14c], ax
        fstp    dword ptr [esi + 0x158]
        call    FUN_004b6d80
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, eax
        shr     edx, 0x2
        and     edx, 0x1
        mov     ecx, eax
        and     ecx, 0xc0
        shl     edx, 0x1
        sub     cl, 0x80
        neg     cl
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
        ret     0x1c
    }
}
