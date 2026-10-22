/*
 * FUN_0053efc0 (370 B) — Reads data from a stream, updates mission state
 * for the second array (0x22AC stride).
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041A070(void);
extern void __cdecl FUN_004DAA20(void);
extern void __cdecl FUN_004E2690(void);

__declspec(naked) void __fastcall FUN_0053efc0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
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

        mov     edx, dword ptr [esp + 0x0C]  ; val1
        mov     eax, dword ptr [esp + 0x10]  ; val2
        mov     ecx, dword ptr [esp + 0x14]  ; val3
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esp + 0x5C]  ; param_1 (byte index)
        and     edx, 0xFF
        imul    edx, edx, 0x22AC
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [edx + edi + 0x205D30]
        test    eax, eax
        mov     dword ptr [esp + 0x50], ecx
        jz      done

        mov     ecx, dword ptr [esp + 0x08]  ; val1 (actually the first read value)
        mov     edx, dword ptr [edi]
        mov     dword ptr [eax + 0x4C8], ecx

        mov     eax, dword ptr [esp + 0x5C]
        and     eax, 0xFF
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x64]       ; this->vtable_method(param_1)

        mov     ecx, dword ptr [esp + 0x5C]
        and     ecx, 0xFF
        imul    ecx, ecx, 0x22AC
        mov     ecx, dword ptr [ecx + edi + 0x205D30]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x14]       ; vtable call

        mov     ecx, dword ptr [esp + 0x5C]
        and     ecx, 0xFF
        imul    ecx, ecx, 0x22AC
        mov     ecx, dword ptr [ecx + edi + 0x205D30]
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_004DAA20

        mov     edx, dword ptr [esp + 0x5C]
        and     edx, 0xFF
        imul    edx, edx, 0x22AC
        mov     ecx, dword ptr [edx + edi + 0x205D30]
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 0x48]       ; vtable call

        mov     ecx, dword ptr [esp + 0x5C]
        ; mov eax, dword ptr [0x007DAB44]
        mov eax, dword ptr [DAT_007dab44]

        and     ecx, 0xFF
        imul    ecx, ecx, 0x22AC
        mov     edx, dword ptr [ecx + edi + 0x205D30]
        mov     ecx, dword ptr [eax]
        push    edx
        ; xor ecx, dword ptr [0x007DAB40]
        xor ecx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [ecx + 0x1C]
        xor     ecx, 0x85739531
        call    FUN_004E2690

    done:
        pop     edi
        pop     esi
        add     esp, 0x4C
        ret     8
    }


}
