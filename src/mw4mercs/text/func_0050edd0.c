/*
 * FUN_0050edd0 (892 B) — Large object constructor (__fastcall).
 *
 * Initializes a ~265 KB structure with default values, allocates
 * buffers, copies string constants, and calls sub-initializers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00416990(void);
extern void FUN_0041ee70(void);
extern void FUN_006bb9d0(void);
extern void FUN_006f4950(void);
extern void *__cdecl FUN_006f3c80(int size, int flags);
extern void FUN_00511d40(void);
extern void FUN_005120c0(void);
extern void FUN_0050f560(void);
extern void FUN_00412780(void);
extern void *__cdecl FUN_004084d0(int size);
extern void FUN_006f49a0(void);
extern void FUN_0051ed40(void);

__declspec(naked) void * __fastcall FUN_0050edd0(void *this)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007ddd21;
extern int DAT_007dd234;
extern int DAT_007b438c;
extern int DAT_007b4388;
extern int DAT_007b4398;
__asm {
push    ebx
        xor     ebx, ebx
        push    ebp
        mov     ebp, ecx
        mov     dword ptr [ebp], ebx
        mov     dword ptr [ebp + 0x04], ebx
        mov     dword ptr [ebp + 0x0c], ebx
        mov     dword ptr [ebp + 0x10], ebx
        mov     dword ptr [ebp + 0x14], ebx
        push    esi
        mov     dword ptr [ebp + 0x40978], ebx
        mov     word ptr [ebp + 0x4097c], 0xffff
        mov     word ptr [ebp + 0x4097e], bx
        push    0x01
        lea     esi, [ebp + 0x40d18]
        mov     dword ptr [ebp + 0x4098c], ebx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x18], ebx
        mov     dword ptr [ebp + 0x40990], ebx
        call    FUN_00416990
        push    ebx
        lea     ecx, [ebp + 0x40eb8]
        mov     dword ptr [esi], 0x0076d654
        call    FUN_0041ee70
        cmp byte ptr [DAT_007ddd21], bl
        jnz     l_skip_seed
        push    ebx
        push    0x3c
        call    FUN_006bb9d0

    l_skip_seed:
        mov eax, dword ptr [DAT_007dd234]
        push    edi
        push    eax
        call    FUN_006f4950
        push    ebx
        push    0x100
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x00778378
        /* __emit: repne scasb - unencodable in MSVC6 inline asm */
        __emit 0xF2
        __emit 0xAE
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x02
        mov     esi, edi
        mov     dword ptr [ebp + 0x40970], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        push    ebx
        and     ecx, 0x03
        push    0x100
        rep movsb
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x0076b768
        /* __emit: repne scasb - unencodable in MSVC6 inline asm */
        __emit 0xF2
        __emit 0xAE
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x02
        mov     esi, edi
        mov     dword ptr [ebp + 0x40988], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        push    ebx
        and     ecx, 0x03
        push    0x100
        rep movsb
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x0076b768
        /* __emit: repne scasb - unencodable in MSVC6 inline asm */
        __emit 0xF2
        __emit 0xAE
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x02
        mov     esi, edi
        mov     dword ptr [ebp + 0x40980], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x03
        rep movsb
        or      eax, 0xffffffff
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x40984], ebx
        mov     dword ptr [ebp + 0x4096c], ebx
        mov     dword ptr [ebp + 0x4099c], ebx
        mov     dword ptr [ebp + 0x409a0], ebx
        mov     dword ptr [ebp + 0x40998], 0x3c
        mov     byte ptr [ebp + 0x40d14], bl
        mov     dword ptr [ebp + 0x20], eax
        mov     dword ptr [ebp + 0x1c], eax
        mov dword ptr [DAT_007b438c], eax
        mov dword ptr [DAT_007b4388], eax
        mov     dword ptr [ebp + 0x08], ebx
        mov     dword ptr [ebp + 0x40ee0], ebx
        call    FUN_00511d40
        mov     ecx, ebp
        call    FUN_005120c0
        mov     ecx, ebp
        call    FUN_0050f560
        mov     dword ptr [ebp + 0x40d2c], ebx
        push    0x0076ba64
        lea     ecx, [ebp + 0x4098c]
        mov     byte ptr [ebp + 0x40da4], bl
        mov     byte ptr [ebp + 0x28], 0x01
        mov     dword ptr [ebp + 0x2c], ebx
        mov     dword ptr [ebp + 0x38], ebx
        mov     dword ptr [ebp + 0x3c], ebx
        mov     dword ptr [ebp + 0x40], ebx
        mov     dword ptr [ebp + 0x44], ebx
        mov     dword ptr [ebp + 0x48], ebx
        mov     dword ptr [ebp + 0x40ee4], ebx
        mov     dword ptr [ebp + 0x40ee8], ebx
        mov     dword ptr [ebp + 0x40d00], ebx
        mov     dword ptr [ebp + 0x40d04], ebx
        mov     dword ptr [ebp + 0x40d08], ebx
        mov     dword ptr [ebp + 0x40d0c], ebx
        mov     byte ptr [ebp + 0x40994], 0x5f
        call    FUN_00412780
        push    0x0076ba64
        lea     ecx, [ebp + 0x40990]
        call    FUN_00412780
        push    0xc8
        mov     dword ptr [ebp + 0x409ac], ebx
        mov     dword ptr [ebp + 0x409b0], 0x19
        mov     dword ptr [ebp + 0x409bc], ebx
        mov     dword ptr [ebp + 0x409c0], ebx
        mov dword ptr [DAT_007b4398], ebx
        call    FUN_004084d0
        mov     esi, eax
        push    0xc8
        mov     dword ptr [ebp + 0x409b8], esi
        call    FUN_004084d0
        mov     edi, eax
        xor     eax, eax
        mov     dword ptr [ebp + 0x409b4], edi
        mov     ecx, 0x32
        rep stosd
        mov     ecx, 0x32
        mov     edi, esi
        push    0x80
        rep stosd
        call    FUN_004084d0
        mov     ecx, 0xfffbf4ac
        add     esp, 0x0c
        mov     dword ptr [ebp + 0x40a4c], eax
        lea     eax, [ebp + 0x40b54]
        sub     ecx, ebp
        mov     edx, 0x20
    l_loop1:
        mov     edi, dword ptr [ebp + 0x40a4c]
        mov     dword ptr [eax - 0x100], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x80], ebx
        lea     esi, [ecx + eax]
        mov     dword ptr [eax - 0x80], ebx
        add     eax, 0x04
        dec     edx
        mov     dword ptr [esi + edi], ebx
        jnz     l_loop1

        lea     eax, [ebp + 0x40c78]
        mov     ecx, 0x08
        pop     edi

    l_loop2:
        mov     dword ptr [eax - 0x20], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x20], ebx
        mov     dword ptr [eax + 0x40], ebx
        mov     dword ptr [eax + 0x60], ebx
        add     eax, 0x04
        dec     ecx
        jnz     l_loop2

        push    0x100
        mov     dword ptr [ebp + 0x40cf8], ebx
        call    FUN_004084d0
        push    0x100
        mov     dword ptr [ebp + 0x40cfc], eax
        mov     dword ptr [ebp + 0x40c54], ebx
        mov     dword ptr [ebp + 0x40a50], ebx
        call    FUN_004084d0
        push    0x100
        mov     dword ptr [ebp + 0x40a44], eax
        call    FUN_004084d0
        push    0x100
        mov     dword ptr [ebp + 0x40a48], eax
        call    FUN_004084d0
        add     esp, 0x10
        mov     dword ptr [ebp + 0x40974], eax
        mov     dword ptr [ebp + 0x30], ebx
        mov     dword ptr [ebp + 0x34], ebx
        mov     dword ptr [ebp + 0x409a4], ebx
        mov     dword ptr [ebp + 0x409a8], ebx
        call    FUN_006f49a0
        or      esi, 0xffffffff
        mov     dword ptr [ebp + 0x4c], ebx
        mov     dword ptr [ebp + 0x50], ebx
        mov     dword ptr [ebp + 0x54], esi
        mov     dword ptr [ebp + 0x5c], ebx
        lea     eax, [ebp + 0x201e4]
        lea     ecx, [ebp + 0xe0]
        mov     edx, 0x100

    l_loop3:
        mov     byte ptr [ecx - 0x80], bl
        mov     byte ptr [ecx], bl
        mov     byte ptr [ecx + 0x100], bl
        mov     byte ptr [ecx + 0x80], bl
        mov     byte ptr [ecx + 0x180], bl
        mov     byte ptr [eax - 0x80], bl
        mov     byte ptr [eax], bl
        mov     byte ptr [eax + 0x100], bl
        mov     byte ptr [eax + 0x80], bl
        mov     byte ptr [eax + 0x180], bl
        mov     dword ptr [eax + 0x184], esi
        add     ecx, 0x201
        add     eax, 0x208
        dec     edx
        jnz     l_loop3

        mov     ecx, ebp
        mov     dword ptr [ebp + 0x58], esi
        call    FUN_0051ed40
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret
    }


}
