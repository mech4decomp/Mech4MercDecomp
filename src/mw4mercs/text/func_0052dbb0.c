/*
 * FUN_0052dbb0 (530 B) — __fastcall constructor-like method.
 * Initializes a large struct (size > 0x1300+ bytes).
 * Calls FUN_005327E0 (release), FUN_004084E0 (free), FUN_004084D0 (alloc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005327E0(int);
extern void __cdecl FUN_004084E0(void *);
extern void * __cdecl FUN_004084D0(int);

/* Global data references */
extern int *DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b8d90;
extern int DAT_007b8d8c;
extern int DAT_007b8d88;
extern int DAT_008bd604;
extern int DAT_008bd608;
extern int DAT_008bd600;

__declspec(naked) void __fastcall FUN_0052dbb0(void)
{
    
__asm {
push    ebx
        push    esi
        mov     esi, ecx

        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esi + 0x14]
        xor     ebx, ebx
        push    edi
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        push    eax
        xor     ecx, 0x85739531

        ; Zero out bytes at [esi+1..0xb]
        mov     byte ptr [esi + 1], bl
        mov     byte ptr [esi + 2], bl
        mov     byte ptr [esi + 4], bl
        mov     byte ptr [esi + 5], bl
        mov     byte ptr [esi + 3], bl
        mov     byte ptr [esi + 6], bl
        mov     byte ptr [esi + 0xa], bl
        mov     byte ptr [esi + 0xb], bl

        mov     dword ptr [esi + 0x4c], ebx
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [esi + 0x8c], 0xbf800000

        call    FUN_005327E0

        ; Second call to FUN_005327E0
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esi + 0x18]
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0xc]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_005327E0

        ; Set fields
        mov     edx, dword ptr [DAT_007b8d90]
        mov     ecx, dword ptr [DAT_007b8d8c]
        or      eax, 0xffffffff
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
        mov     eax, dword ptr [DAT_007b8d88]
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [DAT_008bd604]
        mov     dword ptr [esi + 0x30], edx
        mov     edx, dword ptr [DAT_008bd608]
        mov     dword ptr [esi + 0x38], eax
        mov     dword ptr [esi + 0x3c], edx
        mov     eax, dword ptr [esi + 0x78]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x2c], ecx
        mov     ecx, dword ptr [DAT_008bd600]
        mov     dword ptr [esi + 0x10], 8
        mov     byte ptr [esi + 0x24], 0x5f
        mov     dword ptr [esi + 0x34], ecx
        mov     dword ptr [esi + 0x1c], 0x2d
        mov     dword ptr [esi + 0x6c], ebx
        jz      skip_free_1
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_free_1:
        push    0x28
        mov     dword ptr [esi + 0x70], 0xa
        call    FUN_004084D0
        mov     edi, eax
        xor     eax, eax
        mov     dword ptr [esi + 0x78], edi
        mov     ecx, 0xa
        rep stosd

        mov     eax, dword ptr [esi + 0x98]
        add     esp, 4
        cmp     eax, ebx
        mov     dword ptr [esi + 0x74], ebx
        mov     dword ptr [esi + 0x84], ebx
        jz      skip_free_2
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_free_2:
        push    0x50
        mov     dword ptr [esi + 0x90], 0x14
        call    FUN_004084D0
        mov     edi, eax
        add     esp, 4
        mov     ecx, 0x14
        xor     eax, eax
        mov     dword ptr [esi + 0x98], edi
        rep stosd

        mov     dword ptr [esi + 0x94], ebx
        mov     ecx, 0x14

init_ring_loop:
        mov     eax, dword ptr [esi + 0x94]
        mov     edx, dword ptr [esi + 0x98]
        mov     dword ptr [edx + eax * 4], ebx
        mov     edi, dword ptr [esi + 0x94]
        mov     edx, dword ptr [esi + 0x90]
        inc     edi
        mov     eax, edi
        cmp     eax, edx
        mov     dword ptr [esi + 0x94], edi
        jc      skip_wrap
        mov     dword ptr [esi + 0x94], ebx

skip_wrap:
        dec     ecx
        jnz     init_ring_loop

        mov     dword ptr [esi + 0x9c], ebx
        mov     dword ptr [esi + 0xa0], ebx

        ; Zero out 0xDD dwords at [esi+0xb3c] with stride pattern
        lea     eax, [esi + 0xb3c]
        mov     ecx, 0xdd

zero_loop_1:
        mov     dword ptr [eax - 0xdd * 4], ebx   ; [eax + 0xfffffc8c]
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax - 0x297 * 4], ebx  ; [eax + 0xfffff5a4]
        mov     dword ptr [eax - 0x1ba * 4], ebx  ; [eax + 0xfffff918]
        add     eax, 4
        dec     ecx
        jnz     zero_loop_1

        ; Zero out 0x117 dwords at [esi+0x130c] with stride pattern
        lea     eax, [esi + 0x130c]
        mov     ecx, 0x117

zero_loop_2:
        mov     dword ptr [eax - 0x117 * 4], ebx  ; [eax + 0xfffffba4]
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x117 * 4], ebx  ; [eax + 0x45c]
        mov     dword ptr [eax + 0x22e * 4], ebx  ; [eax + 0x8b8]
        add     eax, 4
        dec     ecx
        jnz     zero_loop_2

        ; Copy from [this+0xc8] to [this+0xc4]
        mov     eax, dword ptr [esi + 0xc8]
        mov     edx, dword ptr [esi + 0xc4]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        cmp     ecx, ebx
        mov     dword ptr [esi + 0xbc], ebx
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xc0], 0xbff00000
        jle     done_copy

copy_loop:
        mov     edi, dword ptr [eax]
        mov     dword ptr [edx], edi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     copy_loop

done_copy:
        pop     edi
        mov     dword ptr [esi + 0xc8], edx
        pop     esi
        pop     ebx
        ret
    }


}
