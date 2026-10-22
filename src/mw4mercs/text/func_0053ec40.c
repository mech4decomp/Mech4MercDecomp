/*
 * FUN_0053ec40 (881 B) — Mission state update function: reads data from
 * a stream, updates mission state, calls various handlers.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041A070(void);
extern void __cdecl FUN_0040D030(void);
extern void __cdecl FUN_005F12F0(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004DAA20(void);
extern void __cdecl FUN_004E2690(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_006272D0(void);
extern void __cdecl FUN_006270D0(void);
extern void __cdecl FUN_005537F0(void);
extern void __cdecl FUN_0055B500(void);
extern void __cdecl FUN_0053EC20(void);

__declspec(naked) void __fastcall FUN_0053ec40(void)
{
    

extern int DAT_007db090;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f1f84;
__asm {
sub     esp, 0x4C
        push    esi
        mov     esi, dword ptr [esp + 0x58]  ; param_2 (stream)
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx                     ; this

        ; Read byte (count)
        push    1
        lea     ecx, [esp + 0x60]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]       ; stream->Read(&val, 1)

        ; Read 4 bytes (val1)
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x0C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val1, 4)

        ; Read 4 bytes (val2)
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val2, 4)

        ; Read 4 bytes (val3)
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val3, 4)

        ; Read 4 bytes (val4)
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val4, 4)

        ; Read 4 bytes (val5)
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val5, 4)

        ; Read 4 bytes (val6)
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val6, 4)

        ; Read 4 bytes (val7)
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val7, 4)

        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_0041A070

        lea     edx, [esp + 0x0C]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0040D030

        mov     eax, dword ptr [esp + 0x5C]  ; param_1 (byte index)
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax                     ; ecx = eax * 0x2038
        mov     eax, dword ptr [edi + ecx*8 + 0x3584]
        test    eax, eax
        jz      done

        mov     edx, dword ptr [eax + 0x170]
        mov     eax, dword ptr [esp + 0x08]  ; val1
        mov     dword ptr [edx + 0x4C8], eax

        mov     eax, dword ptr [esp + 0x5C]  ; param_1
        mov     edx, dword ptr [edi]
        and     eax, 0xFF
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x60]       ; this->vtable_method(param_1)

        ; mov ecx, dword ptr [0x007DB090]
        mov ecx, dword ptr [DAT_007db090]

        mov     dl, byte ptr [ecx + 0x28]
        mov     esi, eax                     ; save return value
        mov     eax, dword ptr [esp + 0x5C]
        cmp     al, dl
        jnz     skip_clear

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [edx]
        ; xor ecx, dword ptr [0x007DAB40]
        xor ecx, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [ecx + 0x2C]
        add     ecx, 0x2C
        xor     edx, 0x85739531
        jz      skip_clear
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     byte ptr [eax + 0x5AC], 0
        mov     eax, dword ptr [esp + 0x5C]

    skip_clear:
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     ecx, dword ptr [edi + ecx*8 + 0x3584]
        push    esi
        call    FUN_005F12F0

        push    esi
        call    FUN_004084E0

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]
        ; xor eax, dword ptr [0x007DAB40]
        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x60]  ; count
        and     eax, 0xFF
        mov     esi, eax
        shl     esi, 7
        add     esi, eax
        shl     esi, 3
        sub     esi, eax
        mov     eax, dword ptr [edi + esi*8 + 0x3584]
        mov     eax, dword ptr [eax + 0x170]
        add     esp, 4                       ; balance stack from push esi above
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x18]       ; vtable call

        mov     eax, dword ptr [esp + 0x5C]
        and     eax, 0xFF
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [edi + edx*8 + 0x3584]
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [eax + 0x170]
        call    FUN_004DAA20

        mov     eax, dword ptr [esp + 0x5C]
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, dword ptr [edi + ecx*8 + 0x3584]
        mov     ecx, dword ptr [edx + 0x170]
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 0x48]       ; vtable call

        mov     eax, dword ptr [esp + 0x5C]
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, dword ptr [edi + ecx*8 + 0x3584]
        mov     eax, dword ptr [edx + 0x170]

        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]
        push    eax
        ; xor edx, dword ptr [0x007DAB40]
        xor edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [edx + 0x1C]
        xor     ecx, 0x85739531
        call    FUN_004E2690

        ; mov ecx, dword ptr [0x007DB090]
        mov ecx, dword ptr [DAT_007db090]

        mov     eax, dword ptr [esp + 0x5C]
        cmp     al, byte ptr [ecx + 0x28]
        jnz     after_conditional

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [edx]
        ; xor ecx, dword ptr [0x007DAB40]
        xor ecx, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [ecx + 0x2C]
        xor     edx, 0x85739531
        jz      after_conditional

        mov     ecx, dword ptr [ecx + 0x40]
        xor     ecx, 0x85739531
        jz      after_conditional

        and     eax, 0xFF
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [edi + edx*8 + 0x3584]
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      after_conditional

        ; mov ecx, dword ptr [0x007F1F84]
        mov ecx, dword ptr [DAT_007f1f84]

        push    ecx
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp     al, 1
        jnz     after_conditional

        mov     ecx, dword ptr [edi + 0x4C]
        cmp     dword ptr [ecx + 0x14], 5
        jnz     after_conditional

        mov     eax, dword ptr [esp + 0x5C]
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        and     eax, 0xFF
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [edi + edx*8 + 0x3584]
        mov     edx, dword ptr [ecx]
        ; mov edi, dword ptr [0x007DAB40]
        mov edi, dword ptr [DAT_007dab40]

        mov     esi, dword ptr [eax + 0x170]
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0x40]
        push    0
        xor     ecx, 0x85739531
        call    FUN_006272D0

        ; mov eax, dword ptr [0x007DAB44]
        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]
        ; xor ecx, dword ptr [0x007DAB40]
        xor ecx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [ecx + 0x40]
        push    0
        push    esi
        xor     ecx, 0x85739531
        call    FUN_006270D0

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]
        ; xor eax, dword ptr [0x007DAB40]
        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x2C]
        xor     ecx, 0x85739531
        call    FUN_005537F0

        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]
        ; xor edx, dword ptr [0x007DAB40]
        xor edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [edx + 0x2C]
        push    0
        xor     ecx, 0x85739531
        call    FUN_0055B500

    after_conditional:
        mov     ecx, dword ptr [esp + 0x0C]
        sub     esp, 0xC
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0x1C]
        mov     dword ptr [eax + 4], edx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 8], ecx
        call    FUN_0053EC20

        mov     ecx, dword ptr [esp + 0x68]
        mov     edx, dword ptr [eax]
        and     ecx, 0xFF
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]       ; vtable call

    done:
        pop     edi
        pop     esi
        add     esp, 0x4C
        ret     8
    }


}
