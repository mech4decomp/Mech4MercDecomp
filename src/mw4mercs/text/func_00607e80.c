/*
 * FUN_00607e80 (257 B) — __thiscall constructor (RET 0xc, 3 args) for an
 * animation-blend object. Sets up two vtables (0x76cd9c then 0x78bee0),
 * initializes members, and for the "small" (<0x96) path queries a
 * sub-object (FUN_005178d0/FUN_006140c0) and copies blend params
 * (position, scale, angle) into this. FPU-heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_00607e80(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ebp, dword ptr [esp + 0x5c]
        mov     ebx, dword ptr [esp + 0x58]
        xor     edi, edi
        push    ebp
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi], 0x76cd9c
        mov     dword ptr [esi + 0x10], ebx
        call    FUN_00412570
        cmp     ebx, 0x96
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esi + 0x18], ecx
        mov     dword ptr [esi + 0x30], 1
        mov     dword ptr [esi], 0x78bee0
        jge     big
        push    ecx
        mov     ecx, esp
        push    ebp
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, dword ptr [eax + 0x8c]
        call    FUN_006140c0
        lea     ecx, [esp + 0x10]
        mov     edi, eax
        call    FUN_004d1f10
        mov     dx, word ptr [edi + 0x10]
        mov     ax, word ptr [edi + 0x12]
        lea     ecx, [esp + 0x58]
        mov     word ptr [esp + 0x58], dx
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     word ptr [esp + 0x62], ax
        call    FUN_004da8d0
        mov     eax, dword ptr [esp + 0x2c]
        fild    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [eax + 0x58]
        mov     dword ptr [esi + 0x1c], ecx
        mov     ecx, dword ptr [eax + 0x30]
        fmul    dword ptr [eax + 0x54]
        add     esp, 8
        cmp     ecx, 0x4e
        fstp    dword ptr [esi + 0x20]
        jnz     skip
        mov     dword ptr [esi + 0x20], 0x42200000
skip:
        fld     dword ptr [eax + 0x3c]
        mov     edx, dword ptr [eax + 0x6c]
        fadd    st(0), st(0)
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esi + 0x28], edx
        fstp    dword ptr [esi + 0x24]
        call    FUN_004d21c0
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
big:
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0x20], edi
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        cmp     ebx, 0xc8
        pop     ebx
        add     esp, 0x44
        ret     0xc
    }
}
