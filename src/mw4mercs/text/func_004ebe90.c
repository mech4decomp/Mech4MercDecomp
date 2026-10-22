/*
 * FUN_004ebe90 (76 B) — __thiscall (RET 0x4). Registers this channel with the
 * global camera (g_007dc868) via FUN_004f29b0/FUN_004179b0; if the arg==1,
 * invokes virtual method [ESI+0x8] and, if it returns nonzero, also registers
 * with the camera's [EAX+0x80] list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc868;
extern int __cdecl FUN_004f29b0(void *);
extern void __cdecl FUN_004179b0(void *);

__declspec(naked) void FUN_004ebe90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007dc868]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [esi + 0x24]
        push    eax
        mov     dword ptr [esi + 0x30], edi
        call    FUN_004f29b0
        push    esi
        lea     ecx, [eax + 0x94]
        call    FUN_004179b0
        cmp     edi, 0x1
        jnz     L_skip
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        test    al, al
        jz      L_done
L_skip:
        mov     eax, dword ptr [g_007dc868]
        push    esi
        lea     ecx, [eax + 0x80]
        call    FUN_004179b0
L_done:
        pop     edi
        pop     esi
        ret     0x4
    }
}
