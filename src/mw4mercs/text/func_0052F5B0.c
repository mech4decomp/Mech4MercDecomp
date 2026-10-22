/*
 * FUN_0052f5b0 (1114 B) — __thiscall constructor method.
 * Large constructor that initializes a massive struct (~0x3538+ bytes).
 * Calls many sub-constructors and allocators.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D3720(int);
extern void __fastcall FUN_00547BE0(int, void **);
extern void __cdecl FUN_00416990(int, int);
extern void __cdecl FUN_0060FBF0(void);
extern void __fastcall FUN_0052D8E0(void);
extern void __fastcall FUN_0052DED0(void);
extern void __cdecl FUN_0061AD00(void);
extern void * __cdecl FUN_004084D0(int);
extern void __fastcall FUN_0052BBE0(void);
extern void __cdecl FUN_00412780(const char *);
extern void * __cdecl FUN_0072D480(const char *);
extern int __cdecl FUN_006FAB90(const char *, ...);
extern void __fastcall FUN_0041FC80(int);
extern void __cdecl FUN_004084E0(void *);
extern void __cdecl FUN_00536510(void);

/* Global data references */
extern int *DAT_0076b638;   /* IAT: CoCreateGuid */
extern int DAT_007afaf0;
extern int DAT_007afaf4;
extern int DAT_007afaf8;
extern int DAT_007afafc;

__declspec(naked) void __fastcall FUN_0052f5b0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        push    ecx                     ; local var
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx                ; esi = this

        push    eax
        call    FUN_004D3720

        lea     ecx, [ebp - 4]
        push    ecx
        xor     ebx, ebx
        lea     edx, [ebp + 0xb]
        push    edx
        lea     ecx, [esi + 0xa4]
        mov     dword ptr [esi + 0x9c], ebx
        mov     dword ptr [esi + 0xa0], ebx
        mov     dword ptr [ebp - 4], ebx
        call    FUN_00547BE0

        mov     al, byte ptr [ebp + 0xc]
        mov     dword ptr [esi + 0xa8], ebx
        mov     dword ptr [esi + 0xb0], ebx
        push    ebx
        lea     edi, [esi + 0xd8]
        mov     dword ptr [esi + 0xc8], ebx
        push    ebx
        mov     ecx, edi
        mov     byte ptr [esi + 0xcc], al
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xd0], ebx
        call    FUN_00416990

        lea     ecx, [esi + 0xf4]
        mov     dword ptr [edi], 0x77b150
        call    FUN_0060FBF0

        mov     cl, byte ptr [ebp + 0xf]
        mov     dword ptr [esi + 0x3064], ebx
        mov     byte ptr [esi + 0x306c], cl
        mov     dword ptr [esi + 0x3068], ebx
        mov     dword ptr [esi + 0x306c], ebx
        mov     dword ptr [esi + 0x34fc], ebx

        ; Loop: call FUN_0052D8E0 0xFF times, stride 0x2038
        lea     edi, [esi + 0x3538]
        mov     dword ptr [ebp + 0xc], 0xff

loop_d8e0:
        mov     ecx, edi
        call    FUN_0052D8E0
        mov     eax, dword ptr [ebp + 0xc]
        add     edi, 0x2038
        dec     eax
        mov     dword ptr [ebp + 0xc], eax
        jnz     loop_d8e0

        mov     dword ptr [esi + 0x204d28], ebx
        mov     dword ptr [esi + 0x204d24], ebx

        ; Loop: call FUN_0052DED0 0x18 times, stride 0x22ac
        lea     edi, [esi + 0x205d24]
        mov     dword ptr [ebp + 0xc], 0x18

loop_ded0:
        mov     ecx, edi
        call    FUN_0052DED0
        mov     eax, dword ptr [ebp + 0xc]
        add     edi, 0x22ac
        dec     eax
        mov     dword ptr [ebp + 0xc], eax
        jnz     loop_ded0

        ; Init 8 structs at [esi+0x239d6c], stride 0xc
        mov     cl, byte ptr [ebp + 0xf]
        lea     eax, [esi + 0x239d6c]
        mov     edi, 8

init_8_structs:
        mov     dword ptr [eax], ebx
        mov     byte ptr [eax + 8], cl
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax + 8], ebx
        add     eax, 0xc
        dec     edi
        jnz     init_8_structs

        lea     ecx, [esi + 0x239df4]
        call    FUN_0061AD00

        push    0xd00
        mov     dword ptr [esi], 0x77b0dc
        call    FUN_004084D0
        add     esp, 4
        cmp     eax, ebx
        jz      alloc_1_null
        mov     ecx, eax
        call    FUN_0052BBE0
        jmp     alloc_1_done

alloc_1_null:
        xor     eax, eax

alloc_1_done:
        push    0xd00
        mov     dword ptr [esi + 0x50], eax
        call    FUN_004084D0
        add     esp, 4
        cmp     eax, ebx
        jz      alloc_2_null
        mov     ecx, eax
        call    FUN_0052BBE0
        jmp     alloc_2_done

alloc_2_null:
        xor     eax, eax

alloc_2_done:
        mov     dword ptr [esi + 0x74], ebx
        push    0x77b0d4
        lea     ecx, [esi + 0xb0]
        mov     dword ptr [esi + 0x54], eax
        mov     byte ptr [esi + 0xf0], 1
        mov     byte ptr [esi + 0x350c], bl
        mov     byte ptr [esi + 0x7c], bl
        mov     dword ptr [esi + 0x78], ebx
        call    FUN_00412780

        push    0x77b0bc
        mov     dword ptr [esi + 0xac], ebx
        call    FUN_0072D480
        cmp     eax, ebx
        mov     dword ptr [esi + 0x80], eax
        jnz     lang_ok

        push    0x77b080
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        jz      lang_ok
        int     3

lang_ok:
        push    0x76b768
        lea     ecx, [esi + 0xc8]
        mov     dword ptr [esi + 0x3534], ebx
        mov     dword ptr [esi + 0x302c], ebx
        mov     byte ptr [esi + 0xc0], bl
        mov     byte ptr [esi + 0xc1], bl
        mov     dword ptr [esi + 0xc4], ebx
        call    FUN_00412780

        or      eax, 0xffffffff
        lea     edx, [esi + 0x204d00]
        mov     dword ptr [esi + 0x3070], eax
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x6c], ebx
        mov     byte ptr [esi + 0x3532], bl
        mov     dword ptr [esi + 0x204d20], ebx
        mov     dword ptr [esi + 0x3024], ebx
        mov     dword ptr [esi + 0x3028], ebx
        mov     dword ptr [esi + 0x3508], 1
        mov     byte ptr [esi + 0x15], bl
        mov     byte ptr [esi + 0xcd], bl
        mov     byte ptr [esi + 0xce], bl
        mov     byte ptr [esi + 0x3530], bl
        mov     dword ptr [esi + 0xb8], ebx
        mov     dword ptr [esi + 0xbc], ebx
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [esi + 0x90], ebx
        mov     dword ptr [esi + 0x8c], ebx
        mov     dword ptr [esi + 0x94], ebx
        mov     dword ptr [esi + 0x98], ebx
        mov     byte ptr [esi + 0x239df0], bl
        mov     dword ptr [esi + 0xec], ebx
        mov     dword ptr [esi + 0x3510], ebx
        mov     byte ptr [esi + 0x3531], bl
        mov     dword ptr [esi + 0x3074], eax
        mov     byte ptr [esi + 0x3078], 1
        mov     dword ptr [esi + 0x3514], ebx
        mov     dword ptr [esi + 0x3098], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x70], ebx
        mov     dword ptr [ebp + 0xc], edx
        mov     dword ptr [ebp + 8], 8

        ; Loop: alloc 8 objects, store at [edx+0..7]
alloc_loop:
        push    8
        call    FUN_004084D0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebx
        jz      alloc_obj_null
        push    ebx
        mov     ecx, edi
        call    FUN_0041FC80
        mov     dword ptr [edi], 0x77b068
        jmp     alloc_obj_done

alloc_obj_null:
        xor     edi, edi

alloc_obj_done:
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [eax], edi
        add     eax, 4
        mov     dword ptr [ebp + 0xc], eax
        dec     dword ptr [ebp + 8]
        jnz     alloc_loop

        mov     dword ptr [esi + 0x239d54], ebx
        mov     dword ptr [esi + 0x239d58], ebx
        mov     dword ptr [esi + 0x239d5c], ebx
        mov     dword ptr [esi + 0x239d60], ebx
        mov     dword ptr [esi + 0x239d64], ebx
        mov     dword ptr [esi + 0x239d68], ebx
        mov     dword ptr [esi + 0x307c], ebx
        mov     dword ptr [esi + 0x3080], ebx
        mov     dword ptr [esi + 0x3084], ebx
        mov     dword ptr [esi + 0x3088], ebx
        mov     byte ptr [esi + 0x308c], bl
        mov     byte ptr [esi + 0x308d], bl
        mov     byte ptr [esi + 0x3518], bl
        mov     dword ptr [esi + 0x351c], ebx
        mov     byte ptr [esi + 0x3520], bl
        mov     dword ptr [esi + 0x3524], ebx
        mov     byte ptr [esi + 0x3528], bl
        mov     dword ptr [esi + 0x352c], ebx
        mov     dword ptr [esi + 0x205524], ebx
        mov     dword ptr [esi + 0x205d20], ebx

        ; Zero out 0xFF dwords at [esi+0x205128] with stride pattern
        lea     eax, [esi + 0x205128]
        mov     ecx, 0xff

zero_loop:
        mov     dword ptr [eax - 0xff * 4], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x100 * 4], ebx
        mov     dword ptr [eax + 0x1ff * 4], ebx
        add     eax, 4
        dec     ecx
        jnz     zero_loop

        ; Copy from [esi+0x3068] to [esi+0x3064]
        mov     eax, dword ptr [esi + 0x3068]
        mov     edx, dword ptr [esi + 0x3064]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        cmp     ecx, ebx
        jle     copy_done

copy_loop:
        mov     edi, dword ptr [eax]
        mov     dword ptr [edx], edi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     copy_loop

copy_done:
        mov     eax, dword ptr [esi + 0x34fc]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x3068], edx
        jz      skip_free_34fc
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_free_34fc:
        push    0x50
        mov     dword ptr [esi + 0x34f4], 0x14
        call    FUN_004084D0
        mov     edi, eax
        xor     eax, eax
        mov     dword ptr [esi + 0x34fc], edi
        mov     ecx, 0x14
        rep stosd

        mov     ecx, dword ptr [esi + 0x34fc]
        mov     dword ptr [esi + 0x34f8], ebx
        mov     dword ptr [esi + 0x3500], ebx
        mov     eax, ebx
        mov     dword ptr [esi + 0x3504], ebx
        mov     dword ptr [ecx + eax * 4], 0x42700000

        mov     edx, dword ptr [esi + 0x34f8]
        mov     ecx, dword ptr [esi + 0x34f4]
        add     esp, 4
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x34f8], edx
        jc      skip_wrap_34f8
        mov     dword ptr [esi + 0x34f8], ebx

skip_wrap_34f8:
        lea     edx, [esi + 0x239dcc]
        push    edx
        call    dword ptr [DAT_0076b638]            ; call [CoCreateGuid]

        mov     ecx, dword ptr [DAT_007afaf0]
        mov     edx, dword ptr [DAT_007afaf4]
        lea     eax, [esi + 0x239ddc]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [DAT_007afaf8]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [DAT_007afafc]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [esi + 0x239dec], ebx
        call    FUN_00536510

        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
