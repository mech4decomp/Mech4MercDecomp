/*
 * FUN_0053df10 (614 B) — Iterates over arrays of objects, counts active ones,
 * writes indices/sizes to a stream, then updates some global state.
 *
 * __fastcall (ECX = this), no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004ce190(void);

__declspec(naked) void __fastcall FUN_0053df10(void)
{
    

extern int DAT_007db094;
extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx

        ; FUN_0041ee70(0) — stream init
        push    0
        lea     ecx, [esp + 0x18]
        call    FUN_0041ee70

        ; First loop: count active entries (index 1..0xFE)
        mov     eax, 1
        mov     dword ptr [esp + 0x10], 0   ; local_2c = 0 (counter)
        mov     dword ptr [esp + 0x0C], eax ; local_30 = 1 (loop var)

    loop1_start:
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax                    ; ecx = eax * 0x2038
        mov     dl, byte ptr [edi + ecx*8 + 0x3538]
        test    dl, dl
        lea     ecx, [edi + ecx*8]
        jz      loop1_skip
        mov     ecx, dword ptr [ecx + 0x3584]
        test    ecx, ecx
        jz      loop1_skip
        mov     edx, dword ptr [ecx + 0x170]
        test    edx, edx
        jz      loop1_skip
        inc     dword ptr [esp + 0x10]      ; counter++
    loop1_skip:
        inc     eax
        cmp     eax, 0xFF
        mov     dword ptr [esp + 0x0C], eax
        jl      loop1_start

        ; Write counter to stream
        push    1
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x1C]
        call    FUN_0041f030

        ; Second loop: write active entry indices and sizes
        mov     eax, 1
        mov     dword ptr [esp + 0x0C], eax

    loop2_start:
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax                    ; ecx = eax * 0x2038
        mov     dl, byte ptr [edi + ecx*8 + 0x3538]
        test    dl, dl
        lea     ecx, [edi + ecx*8]
        jz      loop2_skip
        mov     ecx, dword ptr [ecx + 0x3584]
        test    ecx, ecx
        jz      loop2_skip
        mov     edx, dword ptr [ecx + 0x170]
        test    edx, edx
        jz      loop2_skip

        ; Write index
        push    1
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x1C]
        call    FUN_0041f030

        ; Write size (*(*(this+idx*0x2038+0x3584)+0x170) + 0x4c8)
        mov     eax, dword ptr [esp + 0x0C]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, dword ptr [edi + ecx*8 + 0x3584]
        mov     eax, dword ptr [edx + 0x170]
        push    4
        add     eax, 0x4C8
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_0041f030

        mov     eax, dword ptr [esp + 0x0C]
    loop2_skip:
        inc     eax
        cmp     eax, 0xFF
        mov     dword ptr [esp + 0x0C], eax
        jl      loop2_start

        ; Third loop: count active entries in another array (0x18 entries)
        xor     edx, edx
        mov     ecx, 0x18
        mov     dword ptr [esp + 0x10], edx  ; counter = 0
        lea     eax, [edi + 0x205D30]
        mov     dword ptr [esp + 0x0C], ecx  ; loop var = 0x18

    loop3_start:
        mov     bl, byte ptr [eax + 0x204]
        test    bl, bl
        jz      loop3_skip
        cmp     dword ptr [eax], 0
        jz      loop3_skip
        inc     edx                          ; counter++
    loop3_skip:
        add     eax, 0x22AC
        dec     ecx
        jnz     loop3_start

        ; Write counter
        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x1C]
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0041f030

        ; Fourth loop: write active entry indices and sizes (0x18 entries)
        xor     ecx, ecx
        mov     dword ptr [esp + 0x0C], ecx

    loop4_start:
        mov     edx, ecx
        imul    edx, edx, 0x22AC
        lea     eax, [edx + edi]
        mov     dl, byte ptr [eax + 0x205F34]
        test    dl, dl
        jz      loop4_skip
        mov     edx, dword ptr [eax + 0x205D30]
        test    edx, edx
        jz      loop4_skip

        ; Write index
        push    1
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_0041f030

        ; Write size
        mov     ecx, dword ptr [esp + 0x0C]
        imul    ecx, ecx, 0x22AC
        mov     edx, dword ptr [ecx + edi + 0x205D30]
        push    4
        add     edx, 0x4C8
        push    edx
        lea     ecx, [esp + 0x1C]
        call    FUN_0041f030

        mov     ecx, dword ptr [esp + 0x0C]
    loop4_skip:
        inc     ecx
        cmp     ecx, 0x18
        mov     dword ptr [esp + 0x0C], ecx
        jl      loop4_start

        ; Call stream vtable method
        mov     eax, dword ptr [esp + 0x14]  ; local_28 (stream object)
        push    0
        lea     ecx, [esp + 0x18]
        call    dword ptr [eax + 0xC]        ; stream->Release() or similar

        ; Fifth loop: update global state
        xor     edx, edx
        mov     dword ptr [esp + 0x1C], 0xFFFFFFEC  ; local_24 = -20
        mov     dword ptr [esp + 0x0C], edx         ; loop var = 0

    loop5_start:
        mov     ecx, edx
        shl     ecx, 7
        add     ecx, edx
        shl     ecx, 3
        sub     ecx, edx                    ; ecx = edx * 0x2038
        mov     al, byte ptr [edi + ecx*8 + 0x353C]
        test    al, al
        jz      loop5_skip

        ; mov ecx, dword ptr [0x007DB094]
        mov ecx, dword ptr [DAT_007db094]

        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     edx, eax
        jz      loop5_skip

        mov     ecx, dword ptr [esp + 0x24]  ; iStack_1c
        mov     eax, dword ptr [esp + 0x2C]  ; iStack_14

        ; mov esi, dword ptr [0x007DAB40]
        mov esi, dword ptr [DAT_007dab40]

        sub     eax, ecx

        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [ecx]
        xor     ecx, esi
        lea     esi, [ecx + 0x14]
        mov     ecx, dword ptr [esi]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     ebx, dword ptr [ecx + edx*4 + 0x3C44]
        add     ecx, 0x3C3C
        shl     eax, 3
        add     ebx, eax
        mov     dword ptr [ecx + edx*4 + 0x8], ebx
        add     dword ptr [ecx + 0xC00], eax

        mov     eax, dword ptr [esp + 0x0C]
        mov     ecx, dword ptr [esi]
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    0x3C
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004ce190

        mov     edx, dword ptr [esp + 0x0C]
    loop5_skip:
        inc     edx
        cmp     edx, 0xFF
        mov     dword ptr [esp + 0x0C], edx
        jl      loop5_start

        ; Stream destructor
        lea     ecx, [esp + 0x14]
        call    FUN_0041ef60

        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret
    }


}
