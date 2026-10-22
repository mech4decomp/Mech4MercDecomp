/*
 * FUN_0052fa70 (751 B) — __fastcall destructor method.
 * Counterpart to FUN_0052f5b0. Releases all resources allocated
 * by the constructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0052DDD0(void);
extern void __fastcall FUN_0052E150(void);
extern void __cdecl FUN_004084E0(void *);
extern void __cdecl FUN_00416BC0(void *);
extern void * __cdecl FUN_00416D00(void);
extern void __cdecl FUN_00416D40(void);
extern void __cdecl FUN_00416C60(void);
extern void __cdecl FUN_0061AD10(void);
extern void __fastcall FUN_00547BC0(int, int);
extern void __fastcall FUN_0052DFF0(void);
extern void __cdecl FUN_00417980(void *);
extern void __fastcall FUN_0052DB70(void);
extern void __cdecl FUN_00547C40(int, int);
extern void __cdecl FUN_0060FC90(void);
extern void __cdecl FUN_004169C0(void);
extern void __cdecl FUN_004D3890(void);

__declspec(naked) void __fastcall FUN_0052fa70(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi

        mov     dword ptr [esi], 0x77b0dc

        ; Loop: call FUN_0052DDD0 0xFF times, stride 0x2038
        lea     edi, [esi + 0x3538]
        mov     ebx, 0xff

loop_ddd0:
        mov     ecx, edi
        call    FUN_0052DDD0
        add     edi, 0x2038
        dec     ebx
        jnz     loop_ddd0

        ; Loop: call FUN_0052E150 0x18 times, stride 0x22ac
        lea     edi, [esi + 0x205d24]
        mov     ebx, 0x18

loop_e150:
        mov     ecx, edi
        call    FUN_0052E150
        add     edi, 0x22ac
        dec     ebx
        jnz     loop_e150

        ; Release 8 objects at [esi+0x204d00..0x204d1c]
        lea     edi, [esi + 0x204d00]
        mov     ebx, 8

release_8:
        mov     ecx, dword ptr [edi]
        xor     ebp, ebp
        cmp     ecx, ebp
        jz      skip_release
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

skip_release:
        add     edi, 4
        dec     ebx
        jnz     release_8

        mov     eax, dword ptr [esi + 0x204d20]
        cmp     eax, ebp
        jz      skip_free_204d20
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_free_204d20:
        lea     eax, [esi + 0xd8]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00416BC0

        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x77b17c
        call    FUN_00416D00
        mov     edi, eax
        cmp     edi, ebp
        jz      iter_done

iter_loop:
        lea     ecx, [esp + 0x14]
        call    FUN_00416D40
        cmp     edi, ebp
        jz      skip_iter_release
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx]

skip_iter_release:
        lea     ecx, [esp + 0x14]
        call    FUN_00416D00
        mov     edi, eax
        cmp     edi, ebp
        jnz     iter_loop

iter_done:
        mov     eax, dword ptr [esi + 0x239d60]
        cmp     eax, ebp
        mov     dword ptr [esi + 0x239d54], ebp
        mov     dword ptr [esi + 0x239d58], ebp
        mov     dword ptr [esi + 0x239d5c], ebp
        jz      skip_free_239d60
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x239d60], ebp

skip_free_239d60:
        mov     eax, dword ptr [esi + 0x239d64]
        cmp     eax, ebp
        jz      skip_free_239d64
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x239d64], ebp

skip_free_239d64:
        mov     eax, dword ptr [esi + 0x239d68]
        cmp     eax, ebp
        jz      skip_free_239d68
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x239d68], ebp

skip_free_239d68:
        mov     ecx, dword ptr [esi + 0x50]
        cmp     ecx, ebp
        jz      skip_release_50
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

skip_release_50:
        mov     ecx, dword ptr [esi + 0x54]
        cmp     ecx, ebp
        jz      skip_release_54
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]

skip_release_54:
        mov     ecx, dword ptr [esi + 0x307c]
        cmp     ecx, ebp
        jz      skip_release_307c
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x307c], ebp

skip_release_307c:
        mov     ecx, dword ptr [esi + 0x3080]
        cmp     ecx, ebp
        jz      skip_release_3080
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x3080], ebp

skip_release_3080:
        mov     eax, dword ptr [esi + 0x239dec]
        cmp     eax, ebp
        jz      skip_free_239dec
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x239dec], ebp

skip_free_239dec:
        lea     ecx, [esp + 0x14]
        call    FUN_00416C60

        lea     ecx, [esi + 0x239df4]
        call    FUN_0061AD10

        ; Loop: call FUN_00547BC0 8 times with stride -0xc
        lea     ebx, [esi + 0x239dcc]
        lea     edi, [ebx + 8]
        mov     ebp, 8

loop_47bc0:
        mov     eax, dword ptr [ebx - 0xc]
        mov     ecx, dword ptr [edi - 0xc]
        sub     edi, 0xc
        sub     ebx, 0xc
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_00547BC0
        dec     ebp
        jnz     loop_47bc0

        ; Loop: call FUN_0052DFF0 0x18 times, stride -0x22ac
        lea     edi, [esi + 0x239d44]
        mov     ebx, 0x18

loop_dff0:
        sub     edi, 0x22ac
        mov     ecx, edi
        call    FUN_0052DFF0
        dec     ebx
        jnz     loop_dff0

        lea     ecx, [esi + 0x204d24]
        call    FUN_00417980

        ; Loop: call FUN_0052DB70 0xFF times, stride -0x2038
        lea     edi, [esi + 0x204d00]
        mov     ebx, 0xff

loop_db70:
        sub     edi, 0x2038
        mov     ecx, edi
        call    FUN_0052DB70
        dec     ebx
        jnz     loop_db70

        mov     edx, dword ptr [esi + 0x34fc]
        push    edx
        call    FUN_004084E0

        mov     eax, dword ptr [esi + 0x3064]
        mov     ecx, dword ptr [esi + 0x306c]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00547C40
        add     esp, 0xc

        lea     ecx, [esi + 0xf4]
        call    FUN_0060FC90

        lea     ecx, [esi + 0xd8]
        call    FUN_004169C0

        lea     ecx, [esi + 0xd0]
        call    FUN_00417980

        ; Refcount-decrement [esi+0xc8]
        mov     eax, dword ptr [esi + 0xc8]
        test    eax, eax
        jz      skip_refcount_c8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount_c8
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_refcount_c8:
        ; Refcount-decrement [esi+0xb0]
        mov     eax, dword ptr [esi + 0xb0]
        test    eax, eax
        jz      skip_refcount_b0
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount_b0
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_refcount_b0:
        ; Refcount-decrement [esi+0xa8]
        mov     eax, dword ptr [esi + 0xa8]
        test    eax, eax
        jz      skip_refcount_a8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount_a8
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_refcount_a8:
        ; Walk array at [esi+0x9c] to [esi+0xa0], refcount-decrement each
        mov     ebp, dword ptr [esi + 0x9c]
        mov     ebx, dword ptr [esi + 0xa0]
        mov     edi, ebp
        cmp     edi, ebx
        jz      skip_array

array_loop:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      array_next
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     array_next
        push    eax
        call    FUN_004084E0
        add     esp, 4

array_next:
        add     edi, 4
        cmp     edi, ebx
        jnz     array_loop

skip_array:
        test    ebp, ebp
        jz      skip_free_array
        push    ebp
        call    FUN_004084E0
        add     esp, 4

skip_free_array:
        mov     ecx, esi
        call    FUN_004D3890

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}
