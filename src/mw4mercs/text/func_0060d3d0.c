/*
 * FUN_0060D3D0 (169 B) — __thiscall (ECX = this), RET 0xC, 3 params.
 * Animation-blend object factory: looks up an existing object via
 * FUN_00416b60(this+0x18, &param_3); if found and not refcount -1,
 * increments refcount and returns it. Otherwise allocates a 0x20-byte
 * object, initializes it (vtable 0x78c0ac, two 16-bit pairs from
 * param_1/param_2, param_3, refcount=1) and registers it via
 * FUN_00416a90(this+0x18, obj, &param_3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416a90(void);

extern int   g_7b8c10;   /* DAT_007b8c10 */
extern char  g_78c0ac;   /* vtable PTR_FUN_0078c0ac */

__declspec(naked) void __fastcall FUN_0060D3D0(void)
{
    __asm {
        push    ebp
        lea     ebp, [ecx + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebp
        call    FUN_00416b60
        test    eax, eax
        jz      L_3F8
        mov     ecx, dword ptr [eax + 0x1c]
        cmp     ecx, -0x1
        jz      L_475
        inc     ecx
        mov     dword ptr [eax + 0x1c], ecx
        pop     ebp
        ret     0xc
L_3F8:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_463
        mov     ecx, dword ptr [g_7b8c10]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0x10]
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 0x2]
        mov     word ptr [esi + 0x12], ax
        mov     eax, dword ptr [esp + 0x14]
        mov     cx, word ptr [eax]
        mov     word ptr [esi + 0x10], dx
        mov     dx, word ptr [eax + 0x2]
        mov     word ptr [esi + 0x14], cx
        mov     word ptr [esi + 0x16], dx
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], OFFSET g_78c0ac
        mov     dword ptr [esi + 0x1c], 0x1
        pop     edi
        jmp     L_465
L_463:
        xor     esi, esi
L_465:
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_00416a90
        mov     eax, esi
        pop     esi
L_475:
        pop     ebp
        ret     0xc
    }
}
