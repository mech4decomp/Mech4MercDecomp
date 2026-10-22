/*
 * FUN_0053e8b0 (875 B) — Mission processing function: checks mission state,
 * reads/writes stream data, updates global state.
 *
 * __thiscall (ECX = this), RET 8 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041EE70(void);
extern void __cdecl FUN_0041F030(void);
extern void __cdecl FUN_004CE190(void);
extern void __cdecl FUN_004D6490(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_004F3B00(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041ACB0(void);
extern void __cdecl FUN_0053EC40(void);
extern void __cdecl FUN_0053EC20(void);
extern void __cdecl FUN_0053DF10(void);
extern void __cdecl FUN_0041EF60(void);

__declspec(naked) void __fastcall FUN_0053e8b0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;
__asm {
sub     esp, 0xA8
        mov     eax, dword ptr [esp + 0xAC]  ; param_1 (byte)
        push    ebx
        mov     ebx, ecx                     ; this
        mov     byte ptr [esp + 0x04], al
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax                     ; ecx = eax * 0x2038
        mov     ecx, dword ptr [ebx + ecx*8 + 0x3584]
        test    ecx, ecx
        push    ebp
        push    esi
        push    edi
        jz      done

        mov     esi, dword ptr [ecx + 0x170]
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 1
        jz      done

        mov     edx, dword ptr [ebx + 0x50]
        mov     ecx, dword ptr [edx + 0x38]
        test    ecx, ecx
        jz      process_mission

        mov     ecx, dword ptr [esi + 0x4C8]
        cmp     ecx, dword ptr [edx + 0x3C]
        jl      process_mission

        mov     ecx, dword ptr [edx + 0xA8]
        test    ecx, ecx
        jz      done

        ; Quick path: just call FUN_004CE190 and return
        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        ; mov ecx, dword ptr [0x007DAB40]
        mov ecx, dword ptr [DAT_007dab40]

        push    1
        push    0
        push    0x23
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CE190

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xA8
        ret     8

    process_mission:
        push    0x100
        lea     ecx, [esp + 0x28]
        call    FUN_0041EE70

        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        mov     eax, dword ptr [esp + 0x10]
        ; mov esi, dword ptr [0x007DAB40]
        mov esi, dword ptr [DAT_007dab40]

        and     eax, 0xFF
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax                     ; edx = eax * 0x2038
        mov     eax, dword ptr [ebx + edx*8 + 0x3584]
        mov     ecx, dword ptr [eax + 0x16C]

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]
        xor     eax, esi
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004D6490

        push    0x7B9460
        lea     ecx, [esp + 0x5C]
        mov     esi, eax
        call    FUN_00419460

        lea     eax, [esp + 0x88]
        push    eax
        mov     ecx, esi
        call    FUN_004F3B00
        mov     esi, eax

        mov     ecx, 0xC
        lea     edi, [esp + 0x58]
        rep movsd

        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00419480

        lea     edx, [esp + 0x58]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_0041ACB0

        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, dword ptr [ebx + ecx*8 + 0x3584]
        mov     eax, dword ptr [edx + 0x170]
        inc     dword ptr [eax + 0x4C8]

        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, dword ptr [ebx + ecx*8 + 0x3584]
        mov     eax, dword ptr [edx + 0x170]
        mov     ecx, dword ptr [eax + 0x4C8]
        push    4
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], ecx
        push    edx
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        push    4
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        push    4
        lea     ecx, [esp + 0x1C]
        push    ecx
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        push    4
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        push    4
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        push    4
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        push    4
        lea     edx, [esp + 0x58]
        push    edx
        lea     ecx, [esp + 0x2C]
        call    FUN_0041F030

        mov     eax, dword ptr [esp + 0x24]
        push    0
        lea     ecx, [esp + 0x28]
        call    dword ptr [eax + 0xC]        ; stream->Release()

        mov     eax, dword ptr [esp + 0x10]
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        ; mov ebp, dword ptr [0x007DAB40]
        mov ebp, dword ptr [DAT_007dab40]

        and     eax, 0xFF
        mov     esi, eax
        shl     esi, 7
        add     esi, eax
        mov     dword ptr [esp + 0x2C], 0xFFFFFFEC

        mov     edx, dword ptr [ecx]
        xor     edx, ebp
        mov     ecx, dword ptr [edx]
        shl     esi, 3
        sub     esi, eax
        mov     eax, dword ptr [ebx + esi*8 + 0x3584]
        mov     eax, dword ptr [eax + 0x170]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x18]       ; some vtable call

        ; Loop: iterate over entries
        xor     edi, edi
        mov     esi, 8
        lea     ebp, [ebx + 0x353C]

    loop_start:
        mov     al, byte ptr [ebp - 4]
        test    al, al
        jz      loop_skip
        cmp     byte ptr [ebp], 0
        jz      loop_skip

        ; mov edx, dword ptr [0x007DB094]
        mov edx, dword ptr [DAT_007db094]

        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     edi, ecx
        jz      loop_skip

        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x3C]
        sub     eax, ecx

        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]
        ; xor edx, dword ptr [0x007DAB40]
        xor edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        add     ecx, 0x3C3C
        shl     eax, 3
        add     dword ptr [esi + ecx], eax
        add     dword ptr [ecx + 0xC00], eax

        mov     ecx, dword ptr [edx]
        push    1
        lea     eax, [esp + 0x28]
        push    eax
        push    0x1A
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004CE190

    loop_skip:
        add     esi, 4
        inc     edi
        add     ebp, 0x2038
        cmp     esi, 0x404
        jl      loop_start

        ; mov eax, dword ptr [0x007DB094]
        mov eax, dword ptr [DAT_007db094]

        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        push    edx
        call    FUN_0053EC40

        mov     edx, dword ptr [esp + 0x24]
        push    0
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0xC]        ; stream->Release()

        mov     ecx, dword ptr [esp + 0x14]
        sub     esp, 0xC
        mov     eax, esp
        mov     dword ptr [esp + 0x38], 0xFFFFFFEC
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 4], edx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 8], ecx
        call    FUN_0053EC20

        mov     ecx, dword ptr [esp + 0x1C]
        mov     edx, dword ptr [eax]
        and     ecx, 0xFF
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]       ; vtable call

        mov     ecx, ebx
        call    FUN_0053DF10

        lea     ecx, [esp + 0x24]
        call    FUN_0041EF60

    done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xA8
        ret     8
    }


}
