/*
 * FUN_0052e010 (307 B) — __fastcall destructor/cleanup method.
 * Releases vtable objects at [this+0] and [this+4], then reinitializes
 * fields. Similar to FUN_0052ded0 but with different offsets.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void *);

/* Global data references */
extern short DAT_007db0ac;
extern short DAT_007db0ae;

__declspec(naked) void __fastcall FUN_0052e010(void)
{
    
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        push    edi

        ; Release vtable object at [esi]
        mov     edi, dword ptr [esi]
        xor     ebx, ebx
        cmp     edi, ebx
        jz      skip_obj_0

        mov     eax, dword ptr [edi]
        push    ebx
        mov     ecx, edi
        call    dword ptr [eax + 0xc]

        mov     edx, dword ptr [edi]
        mov     ecx, edi
        mov     dword ptr [edi + 8], 0xffffffec
        call    dword ptr [edx + 4]

        push    eax
        call    FUN_004084E0
        add     esp, 4

        cmp     edi, ebx
        jz      skip_release_0
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]

skip_release_0:
        mov     dword ptr [esi], ebx

skip_obj_0:
        ; Release vtable object at [esi+4]
        mov     ecx, dword ptr [esi + 4]
        cmp     ecx, ebx
        jz      skip_obj_4
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 4], ebx

skip_obj_4:
        ; Load word values from globals
        mov     ax, word ptr [DAT_007db0ac]          ; mov ax, [0x007db0ac]
        mov     cx, word ptr [DAT_007db0ae]          ; mov cx, [0x007db0ae]

        mov     word ptr [esi + 0x31c], ax
        mov     word ptr [esi + 0x31e], cx

        mov     byte ptr [esi + 8], bl
        mov     byte ptr [esi + 0x10], bl
        mov     byte ptr [esi + 0x110], bl

        or      eax, 0xffffffff              ; eax = -1

        ; Set 10 dwords to -1 at [esi+0x320..0x344]
        mov     dword ptr [esi + 0x320], eax
        mov     dword ptr [esi + 0x324], eax
        mov     dword ptr [esi + 0x328], eax
        mov     dword ptr [esi + 0x32c], eax
        mov     dword ptr [esi + 0x330], eax
        mov     dword ptr [esi + 0x334], eax
        mov     dword ptr [esi + 0x338], eax
        mov     dword ptr [esi + 0x33c], eax
        mov     dword ptr [esi + 0x340], eax
        mov     dword ptr [esi + 0x344], eax

        mov     dword ptr [esi + 0x214], 8
        mov     byte ptr [esi + 0x210], bl
        mov     byte ptr [esi + 0x211], bl
        mov     byte ptr [esi + 0x212], bl
        mov     dword ptr [esi + 0x218], 0x2d
        mov     dword ptr [esi + 0xc], ebx
        mov     byte ptr [esi + 0x21c], bl

        ; Zero out 0xDD dwords at [esi+0xdbc] with stride pattern
        lea     eax, [esi + 0xdbc]
        mov     ecx, 0xdd

zero_loop_1:
        mov     dword ptr [eax - 0xdd * 4], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax - 0x297 * 4], ebx
        mov     dword ptr [eax - 0x1ba * 4], ebx
        add     eax, 4
        dec     ecx
        jnz     zero_loop_1

        ; Zero out 0x117 dwords at [esi+0x158c] with stride pattern
        lea     eax, [esi + 0x158c]
        mov     ecx, 0x117

zero_loop_2:
        mov     dword ptr [eax - 0x117 * 4], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x117 * 4], ebx
        mov     dword ptr [eax + 0x22e * 4], ebx
        add     eax, 4
        dec     ecx
        jnz     zero_loop_2

        pop     edi
        mov     byte ptr [esi + 0x22a8], bl
        pop     esi
        pop     ebx
        ret
    }


}
