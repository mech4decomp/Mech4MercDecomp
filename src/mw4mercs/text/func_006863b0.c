/*
 * FUN_006863b0 (279 B) — __thiscall grid/collision lookup. Computes a
 * cell index via _ftol() on float expressions, then scans 8 cells for a
 * matching flag, returning 1 if found.
 *
 * __thiscall (ECX = this), RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00786dd8;
extern float g_007880fc;
extern int __cdecl FUN_0075db4a(void);

__declspec(naked) int __cdecl FUN_006863b0(void)
{
    __asm {
        sub     esp, 0x40
        fld     dword ptr [esp + 0x48]
        mov     eax, 0xa
        push    ebx
        fadd    dword ptr [g_00786dd8]
        mov     edx, 0xfffffff6
        push    ebp
        push    esi
        xor     esi, esi
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], eax
        mov     eax, dword ptr [ecx + 0x3c]
        fmul    dword ptr [g_007880fc]
        push    edi
        mov     edi, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x44], edx
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x54]
        fadd    dword ptr [g_00786dd8]
        mov     ebx, eax
        shl     ebx, 9
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        add     ebx, eax
        shl     ebx, 1
        mov     ecx, edi
        sub     ecx, ebx
        xor     edx, edx
        mov     dx, word ptr [ecx]
        and     edx, dword ptr [esp + 0x5c]
        test    edx, 0xffffff7f
        jz      L_45d
L_451:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x40
        ret     0xc
L_45d:
        xor     ebx, ebx
        lea     esi, [esp + 0x10]
L_463:
        fild    dword ptr [esi + 4]
        fadd    dword ptr [esp + 0x58]
        fadd    dword ptr [g_00786dd8]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        fild    dword ptr [esi]
        mov     ebp, eax
        shl     ebp, 9
        fadd    dword ptr [esp + 0x54]
        fadd    dword ptr [g_00786dd8]
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        mov     edx, dword ptr [esp + 0x5c]
        add     ebp, eax
        shl     ebp, 1
        mov     eax, edi
        xor     ecx, ecx
        sub     eax, ebp
        mov     cx, word ptr [eax]
        and     ecx, edx
        test    ecx, 0xffffff7f
        jnz     L_451
        inc     ebx
        add     esi, 8
        cmp     ebx, 8
        jl      L_463
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x40
        ret     0xc
    }
}
