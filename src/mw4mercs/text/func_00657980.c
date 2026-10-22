/*
 * FUN_00657980 (256 B) — __fastcall (ECX = param_1), plain RET.
 *
 * Allocates a 2D array (rows = [EDI]/0x50, cols = [EDI+4]/0x50), zeroes
 * it, then scans a packed byte grid and increments counters where the
 * low 6 bits equal 0x3f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f2464;

extern void __cdecl FUN_006f4950(void *p);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall FUN_00657980(int *param_1)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi]
        mov     eax, 0x66666667
        imul    ecx
        mov     ecx, dword ptr [edi + 0x4]
        sar     edx, 0x5
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ebp, edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x5
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     esi, edx
        mov     edx, dword ptr [DAT_007f2464]
        push    edx
        mov     dword ptr [edi + 0x18], ebp
        mov     dword ptr [edi + 0x1c], esi
        call    FUN_006f4950
        lea     eax, [esi*4 + 0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [edi + 0xc], eax
        jle     label_00657a00
        mov     ebx, eax
        mov     dword ptr [esp + 0x10], esi

    label_006579e7:
        push    ebp
        call    FUN_004084d0
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        add     ebx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     label_006579e7

    label_00657a00:
        call    FUN_006f49a0
        xor     edx, edx
        test    ebp, ebp
        jle     label_00657a26

    label_00657a0b:
        test    esi, esi
        jle     label_00657a21
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, esi

    label_00657a15:
        mov     ebx, dword ptr [eax]
        add     eax, 0x4
        dec     ecx
        mov     byte ptr [ebx + edx*0x1], 0x0
        jnz     label_00657a15

    label_00657a21:
        inc     edx
        cmp     edx, ebp
        jl      label_00657a0b

    label_00657a26:
        mov     edx, dword ptr [edi + 0x10]
        xor     esi, esi
        test    edx, edx
        jbe     label_00657a78
        mov     eax, dword ptr [edi + 0x14]

    label_00657a32:
        xor     ecx, ecx
        test    eax, eax
        jbe     label_00657a70
        mov     eax, dword ptr [edi + 0x8]
        add     edx, edx
        mov     dword ptr [esp + 0x10], edx
        lea     edx, [eax + esi*0x2]

    label_00657a44:
        mov     al, byte ptr [edx]
        and     al, 0x3f
        cmp     al, 0x3f
        jnz     label_00657a62
        mov     ebp, dword ptr [esp + 0x14]
        mov     eax, ecx
        sar     eax, 0x3
        mov     eax, dword ptr [ebp + eax*0x4]
        mov     ebx, esi
        sar     ebx, 0x3
        add     eax, ebx
        inc     byte ptr [eax]

    label_00657a62:
        mov     ebp, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0x14]
        inc     ecx
        add     edx, ebp
        cmp     ecx, eax
        jc      label_00657a44

    label_00657a70:
        mov     edx, dword ptr [edi + 0x10]
        inc     esi
        cmp     esi, edx
        jc      label_00657a32

    label_00657a78:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
