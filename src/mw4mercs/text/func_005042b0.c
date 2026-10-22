/*
 * FUN_005042B0 (525 B) — Child component lookup by name
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_005042B0(void)
{
    

/* extern data/function symbols */
extern void __cdecl FUN_10050323d(void);
extern void __cdecl FUN_100411a4c(void);
extern void __cdecl FUN_100411a2d(void);
extern void __cdecl FUN_1004179d7(void);
extern void __cdecl FUN_1004179cd(void);
extern void __cdecl FUN_1004179be(void);
extern void __cdecl FUN_10040c046(void);
extern void __cdecl FUN_10040c03c(void);
extern void __cdecl FUN_00504c0f(void);
extern void __cdecl FUN_006faa9c(void);
extern int DAT_007dc83c;
extern void __cdecl FUN_10041511c(void);
extern void __cdecl FUN_006faa60(void);
extern int DAT_0076b2dc;
extern void __cdecl FUN_1004177b1(void);
extern void __cdecl FUN_10040830b(void);
extern void __cdecl FUN_10041779a(void);
extern void __cdecl FUN_1004082f4(void);
extern int DAT_007dc81c;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x3C
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp+8]
        mov     esi, [edi]
        mov     eax, [esi]
        push    0x28
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        push    edi
        call FUN_10050323d
        mov     ecx, [edi+0xC]
        mov     ebx, [edi+8]
        add     esp, 4
        test    eax, eax
        mov     [ebp-0x18], ecx
        push    0x77377C
        mov     ecx, ebx
        setne   byte ptr [ebp-1]
        mov     [ebp-0x1C], ebx
        call FUN_100411a4c
        mov     [ebp-0x2C], eax
        mov     edx, [eax]
        mov     edi, 0x76CC9C
        push    0x7768B4
        mov     ecx, ebx
        mov     [ebp-0x24], eax
        mov     [ebp-0x28], edx
        mov     [ebp-0x30], edi
        call FUN_100411a2d
        mov     ecx, [ebp-0x2C]
        mov     [ebp-0x20], eax
        mov     [ebp-0x38], eax
        mov     eax, [eax]
        mov     [ebp-0x34], eax
        mov     [ebp-0x3C], edi
        call FUN_1004179d7
        mov     ecx, [ebp-0x38]
        mov     edi, eax
        call FUN_1004179cd
        cmp     edi, eax
        mov     ecx, [ebp-0x2C]
        jb      use_first
        mov     ecx, [ebp-0x38]

use_first:
        call FUN_1004179be
        mov     [ebp-0x14], eax
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        lea     ecx, [ebp-0x30]
        call FUN_10040c046
        lea     ecx, [ebp-0x3C]
        mov     edi, eax
        call FUN_10040c03c
        test    edi, edi
        mov     ebx, eax
        mov     dword ptr [ebp-0x10], 0xFFFFFFFF
        je      cleanup_and_return

loop_start:
        test    ebx, ebx
        je      cleanup_and_return
        mov     ecx, [ebp+8]
        mov     edi, [edi+0x18]
        mov     edx, [ecx+4]
        mov     eax, [ebp-0x18]
        push    edi
        push    edx
        push    eax
        call FUN_00504c0f
        add     esp, 0xC
        cmp     eax, -1
        mov     [ebp-0x10], eax
        jne     found_name
        mov     eax, [ebp-0x1C]
        mov     ecx, [eax+0x14]
        mov     edx, [eax+0x10]
        mov     eax, [edx]
        push    edi
        push    ecx
        push    eax
        push    0x77677C
        call FUN_006faa9c
        add     esp, 0x10
        test    eax, eax
        je      set_false
        int     3
        jmp     set_false

found_name:
        mov     ecx, [ebp-0x18]
        mov     edx, [ecx]
        mov ecx, dword ptr [DAT_007dc83c]
        mov     eax, [edx+eax*8]
        push    ecx
        mov     ecx, eax
        call FUN_10041511c
        test    al, al
        jne     check_done
        mov     eax, [ebp-0x1C]
        mov     edx, [eax+0x14]
        mov     eax, [eax+0x10]
        mov     ecx, [eax]
        push    edi
        push    edx
        push    ecx
        push    0x776874
        call FUN_006faa60
        add     esp, 0x10
        test    eax, eax
        je      set_false
        int     3

set_false:
        mov     byte ptr [ebp-1], 0

check_done:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, [ebx+0x18]
        lea     ecx, [ebp-0xC]
        push    ecx
        lea     edx, [ebp-8]
        push    edx
        push    0x76E28C
        push    eax
        call dword ptr [DAT_0076b2dc]
        fld     dword ptr [ebp-8]
        fmul    dword ptr [ebp-8]
        mov     edx, [esi]
        add     esp, 0x10
        push    4
        fstp    dword ptr [ebp-8]
        lea     eax, [ebp-8]
        fld     dword ptr [ebp-0xC]
        push    eax
        fmul    dword ptr [ebp-0xC]
        mov     ecx, esi
        fstp    dword ptr [ebp-0xC]
        call    dword ptr [edx+0x24]
        mov     edx, [eax]
        push    4
        lea     ecx, [ebp-0xC]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     eax, [ebp-0x28]
        test    eax, eax
        je      skip_advance_b
        mov     edx, [eax+4]
        mov     edi, [eax]
        mov     [ebp-0x28], edx
        jmp     after_advance_b

skip_advance_b:
        xor     edi, edi

after_advance_b:
        mov     eax, [ebp-0x34]
        test    eax, eax
        je      skip_advance_a
        mov     ecx, [eax]
        mov     eax, [eax+4]
        mov     [ebp-0x34], eax
        mov     eax, ecx
        jmp     after_advance_a

skip_advance_a:
        xor     eax, eax

after_advance_a:
        test    edi, edi
        mov     ebx, eax
        jne     loop_start

cleanup_and_return:
        mov     esi, [ebp-0x20]
        test    esi, esi
        je      cleanup2
        mov     ecx, esi
        call FUN_1004177b1
        push    esi
        call FUN_10040830b
        add     esp, 4

cleanup2:
        mov     esi, [ebp-0x24]
        test    esi, esi
        je      return_val
        mov     ecx, esi
        call FUN_10041779a
        push    esi
        call FUN_1004082f4
        add     esp, 4

return_val:
        mov     al, byte ptr [ebp-1]
        mov ecx, dword ptr [DAT_007dc81c]
        neg     al
        pop     edi
        pop     esi
        pop     ebx
        sbb     eax, eax
        and     eax, ecx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
