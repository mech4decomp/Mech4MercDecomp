/*
 * FUN_00626D80 (835 B) ? __thiscall (ECX=this) with 1 byte stack param, RET 4.
 * Destructor: deletes a large set of member objects (each: thiscall dtor on
 * ECX=obj, then cdecl free FUN_004084e0(obj)), then nulls all the member
 * pointers, then copies a 4-byte-element array [0xf8]->[0xfc] (loop is dead
 * because ECX is computed as 0, but transcribed verbatim).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00671870(void);
extern void __cdecl FUN_00641820(void);
extern void __cdecl FUN_00643040(void);
extern void __cdecl FUN_00644180(void);
extern void __cdecl FUN_00644e20(void);
extern void __cdecl FUN_006451b0(void);
extern void __cdecl FUN_00645960(void);
extern void __cdecl FUN_00645e00(void);
extern void __cdecl FUN_00646410(void);
extern void __cdecl FUN_0063dae0(void);
extern void __cdecl FUN_0063f950(void);
extern void __cdecl FUN_0063c3b0(void);
extern void __cdecl FUN_0066d970(void);
extern void __cdecl FUN_00625770(void);
extern void __cdecl FUN_00697710(void);
extern void __cdecl FUN_00679600(void);
extern void __cdecl FUN_0066f7c0(void);
extern void __cdecl FUN_0069cd90(void);
extern void __cdecl FUN_006297d0(void);
extern void __cdecl FUN_0069cb90(void);
extern void __cdecl FUN_00666000(void);
extern void __cdecl FUN_0069c9a0(void);
extern void __cdecl FUN_00561730(void);
extern void __cdecl FUN_0062c580(void);

__declspec(naked) void __cdecl FUN_00626D80(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x160]
        xor     ebx, ebx
        cmp     edi, ebx
        jz      L_6da1
        mov     ecx, edi
        call    FUN_00671870
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6da1:
        mov     edi, dword ptr [esi + 0x108]
        cmp     edi, ebx
        jz      L_6dbb
        mov     ecx, edi
        call    FUN_00641820
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6dbb:
        mov     edi, dword ptr [esi + 0x10c]
        cmp     edi, ebx
        jz      L_6dd5
        mov     ecx, edi
        call    FUN_00643040
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6dd5:
        mov     edi, dword ptr [esi + 0x110]
        cmp     edi, ebx
        jz      L_6def
        mov     ecx, edi
        call    FUN_00644180
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6def:
        mov     edi, dword ptr [esi + 0x114]
        cmp     edi, ebx
        jz      L_6e09
        mov     ecx, edi
        call    FUN_00644e20
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6e09:
        mov     edi, dword ptr [esi + 0x118]
        cmp     edi, ebx
        jz      L_6e23
        mov     ecx, edi
        call    FUN_006451b0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6e23:
        mov     edi, dword ptr [esi + 0x120]
        cmp     edi, ebx
        jz      L_6e3d
        mov     ecx, edi
        call    FUN_00645960
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6e3d:
        mov     edi, dword ptr [esi + 0x11c]
        cmp     edi, ebx
        jz      L_6e57
        mov     ecx, edi
        call    FUN_00645e00
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6e57:
        mov     edi, dword ptr [esi + 0x124]
        cmp     edi, ebx
        jz      L_6e71
        mov     ecx, edi
        call    FUN_00646410
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6e71:
        mov     edi, dword ptr [esi + 0x128]
        cmp     edi, ebx
        jz      L_6e8b
        mov     ecx, edi
        call    FUN_0063dae0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6e8b:
        mov     edi, dword ptr [esi + 0x12c]
        cmp     edi, ebx
        jz      L_6ea5
        mov     ecx, edi
        call    FUN_0063f950
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6ea5:
        mov     edi, dword ptr [esi + 0x130]
        cmp     edi, ebx
        jz      L_6ebf
        mov     ecx, edi
        call    FUN_0063c3b0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6ebf:
        mov     edi, dword ptr [esi + 0x134]
        cmp     edi, ebx
        jz      L_6ed9
        mov     ecx, edi
        call    FUN_0066d970
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6ed9:
        cmp     byte ptr [esp + 0x10], bl
        jz      L_6ef9
        mov     edi, dword ptr [esi + 0x138]
        cmp     edi, ebx
        jz      L_6ef9
        mov     ecx, edi
        call    FUN_00625770
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6ef9:
        mov     edi, dword ptr [esi + 0x13c]
        cmp     edi, ebx
        jz      L_6f13
        mov     ecx, edi
        call    FUN_00697710
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6f13:
        mov     edi, dword ptr [esi + 0x140]
        cmp     edi, ebx
        jz      L_6f2d
        mov     ecx, edi
        call    FUN_00679600
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6f2d:
        mov     edi, dword ptr [esi + 0x144]
        cmp     edi, ebx
        jz      L_6f47
        mov     ecx, edi
        call    FUN_0066f7c0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6f47:
        mov     edi, dword ptr [esi + 0x148]
        cmp     edi, ebx
        jz      L_6f61
        mov     ecx, edi
        call    FUN_0069cd90
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6f61:
        mov     edi, dword ptr [esi + 0x14c]
        cmp     edi, ebx
        jz      L_6f7b
        mov     ecx, edi
        call    FUN_006297d0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6f7b:
        mov     edi, dword ptr [esi + 0x150]
        cmp     edi, ebx
        jz      L_6f95
        mov     ecx, edi
        call    FUN_0069cb90
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6f95:
        mov     edi, dword ptr [esi + 0x154]
        cmp     edi, ebx
        jz      L_6faf
        mov     ecx, edi
        call    FUN_00666000
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6faf:
        mov     edi, dword ptr [esi + 0x158]
        cmp     edi, ebx
        jz      L_6fc9
        mov     ecx, edi
        call    FUN_0069c9a0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6fc9:
        mov     edi, dword ptr [esi + 0x104]
        cmp     edi, ebx
        jz      L_6fe3
        mov     ecx, edi
        call    FUN_00561730
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6fe3:
        mov     edi, dword ptr [esi + 0x15c]
        cmp     edi, ebx
        jz      L_6ffd
        mov     ecx, edi
        call    FUN_0062c580
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_6ffd:
        cmp     byte ptr [esp + 0x10], bl
        mov     dword ptr [esi + 0x160], ebx
        mov     dword ptr [esi + 0x108], ebx
        mov     dword ptr [esi + 0x10c], ebx
        mov     dword ptr [esi + 0x110], ebx
        mov     dword ptr [esi + 0x114], ebx
        mov     dword ptr [esi + 0x118], ebx
        mov     dword ptr [esi + 0x120], ebx
        mov     dword ptr [esi + 0x11c], ebx
        mov     dword ptr [esi + 0x124], ebx
        mov     dword ptr [esi + 0x128], ebx
        mov     dword ptr [esi + 0x12c], ebx
        mov     dword ptr [esi + 0x130], ebx
        mov     dword ptr [esi + 0x134], ebx
        jz      L_27057
        mov     dword ptr [esi + 0x138], ebx
    L_27057:
        mov     eax, dword ptr [esi + 0xfc]
        mov     edx, dword ptr [esi + 0xf8]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 0x2
        cmp     ecx, ebx
        mov     dword ptr [esi + 0x13c], ebx
        mov     dword ptr [esi + 0x140], ebx
        mov     dword ptr [esi + 0x144], ebx
        mov     dword ptr [esi + 0x148], ebx
        mov     dword ptr [esi + 0x14c], ebx
        mov     dword ptr [esi + 0x150], ebx
        mov     dword ptr [esi + 0x154], ebx
        mov     dword ptr [esi + 0x158], ebx
        mov     dword ptr [esi + 0x104], ebx
        mov     dword ptr [esi + 0x15c], ebx
        jle     L_270b7
    L_270aa:
        mov     edi, dword ptr [eax]
        mov     dword ptr [edx], edi
        add     eax, 0x4
        add     edx, 0x4
        dec     ecx
        jnz     L_270aa
    L_270b7:
        pop     edi
        mov     dword ptr [esi + 0xfc], edx
        pop     esi
        pop     ebx
        ret     0x4
    }
}
