// Auto-generated: FUN_0050ac80, 620 bytes, __thiscall
// Processes an array of 0x24-byte entries with type-based dispatch

// Forward declarations for called functions
void FUN_0050CE90(void);
void FUN_006F4950(void);
void FUN_0050B4A0(void);
void FUN_006F49A0(void);
void FUN_0050C5C0(void);
void FUN_004084E0(void);
void FUN_004084D0(void);
void FUN_0050C530(void);

extern int g_7dc12c;    /* 0x007DC12C */
extern int g_50aeec[];  /* jump table @ 0x0050AEEC */

__declspec(naked) void func_0050ac80(void)
{
    __asm {
        push    ecx                     ; allocate local
        mov     al, byte ptr [esp+8]    ; char parameter
        test    al, al
        push    ebx
        mov     ebx, ecx                ; this in ebx
        mov     [esp+4], ebx            ; save this
        je      loc_50ACC2

        ; if param != 0:
        mov     ecx, [esp+0Ch]          ; param as dword
        mov     edx, [ebx]              ; [this+0]
        mov     eax, [ebx+4]            ; [this+4]
        push    0
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_0050CE90
        mov     [ebx+4], eax            ; update [this+4]
        mov     eax, dword ptr [g_7dc12c]
        add     esp, 14h
        push    eax
        call    FUN_006F4950
        push    ebx
        mov     ecx, ebx
        call    FUN_0050B4A0
        call    FUN_006F49A0

loc_50ACC2:
        mov     edx, [ebx+4]            ; end pointer
        push    ebp
        push    esi
        mov     esi, [ebx]              ; start pointer
        mov     eax, esi
        cmp     eax, edx
        push    edi
        je      loc_50ACFE

        ; First pass: fix up type 9 entries with format 0x200/0x201
loc_50ACD0:
        mov     ecx, [eax+4]            ; entry field at +4
        test    ecx, ecx
        je      loc_50ACF7
        cmp     dword ptr [eax+10h], 9  ; type field
        jne     loc_50ACF7
        mov     ecx, [eax+14h]          ; format field
        cmp     ecx, 201h
        je      loc_50ACF0
        cmp     ecx, 200h
        jne     loc_50ACF7
loc_50ACF0:
        mov     dword ptr [eax+10h], 8  ; change type to 8
loc_50ACF7:
        add     eax, 24h                ; next entry (0x24 bytes each)
        cmp     eax, edx
        jne     loc_50ACD0

loc_50ACFE:
        mov     eax, esi
        cmp     eax, edx
        mov     dword ptr [ebx+0Ch], 0  ; reset count
        je      loc_50AD33

        ; Second pass: count entries with types 1, 2, 8, 9
loc_50AD0B:
        mov     ecx, [eax+4]
        test    ecx, ecx
        je      loc_50AD2C
        mov     ecx, [eax+10h]          ; type
        cmp     ecx, 1
        je      loc_50AD29
        cmp     ecx, 8
        je      loc_50AD29
        cmp     ecx, 9
        je      loc_50AD29
        cmp     ecx, 2
        jne     loc_50AD2C
loc_50AD29:
        inc     dword ptr [ebx+0Ch]     ; count++
loc_50AD2C:
        add     eax, 24h
        cmp     eax, edx
        jne     loc_50AD0B

loc_50AD33:
        mov     ecx, [ebx+10h]          ; existing allocation
        test    ecx, ecx
        je      loc_50AD68

        ; Free old allocation
        mov     eax, [ecx-4]            ; count of items
        lea     ebp, [ecx-4]            ; pointer to count
        lea     edx, [eax+eax*8]        ; eax * 9
        lea     edx, [eax+edx*2]        ; eax * 9 * 2 + eax = eax * 19
        dec     eax
        lea     esi, [ecx+edx*8]        ; end of allocation
        js      loc_50AD5F

        ; Free each item
loc_50AD4F:
        lea     edi, [eax+1]
loc_50AD52:
        sub     esi, 98h                ; 0x98 bytes per item
        mov     ecx, esi
        call    FUN_0050C5C0
        dec     edi
        jne     loc_50AD52
loc_50AD5F:
        push    ebp
        call    FUN_004084E0            ; free
        add     esp, 4

loc_50AD68:
        ; Allocate new array
        mov     eax, [ebx+0Ch]          ; count
        lea     esi, [eax+1]            ; count + 1
        lea     eax, [esi+esi*8]        ; (count+1) * 9
        lea     ecx, [esi+eax*2]        ; (count+1) * 9 * 2 + (count+1) = (count+1) * 19
        lea     edx, [ecx*8+4]          ; (count+1) * 19 * 8 + 4 = (count+1) * 0x98 + 4
        push    edx
        call    FUN_004084D0            ; allocate
        add     esp, 4
        test    eax, eax
        je      loc_50ADB1

        lea     ebp, [eax+4]            ; skip count dword
        mov     [eax], esi              ; store count
        lea     eax, [esi-1]
        test    eax, eax
        mov     edi, ebp
        jl      loc_50ADAD

        ; Initialize each item
        lea     ebx, [eax+1]
loc_50AD99:
        mov     ecx, edi
        call    FUN_0050C530
        add     edi, 98h                ; 0x98 bytes per item
        dec     ebx
        jne     loc_50AD99
        mov     ebx, [esp+10h]          ; restore this

loc_50ADAD:
        mov     edi, ebp
        jmp     loc_50ADB3

loc_50ADB1:
        xor     edi, edi                ; null allocation

loc_50ADB3:
        ; Zero out the new allocation
        lea     eax, [esi+esi*8]
        lea     ecx, [esi+eax*2]
        shl     ecx, 3
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        mov     [ebx+10h], edi          ; store new allocation pointer
        rep stosd                       ; zero dwords
        mov     ecx, edx
        and     ecx, 3
        rep stosb                       ; zero remaining bytes

        ; Third pass: copy entries into new allocation
        mov     edx, [ebx]              ; start pointer
        mov     ebp, [ebx+4]            ; end pointer
        cmp     edx, ebp
        je      loc_50AEBE

loc_50ADDC:
        mov     esi, [edx+4]            ; entry field at +4
        test    esi, esi
        je      loc_50AEB3

        ; Find slot in new allocation
        mov     eax, [ebx+10h]          ; new allocation base
loc_50ADE7:
        mov     ecx, [eax+78h]          ; slot field
        test    ecx, ecx
        je      loc_50AE04
loc_50ADF1:
        cmp     ecx, esi
        je      loc_50AE04
        mov     ecx, [eax+110h]         ; next slot
        add     eax, 98h                ; 0x98 per slot
        test    ecx, ecx
        jne     loc_50ADF1

loc_50AE04:
        ; Dispatch based on entry type
        mov     ecx, [edx+10h]          ; type
        dec     ecx
        cmp     ecx, 8
        ja      loc_50AEB3              ; default: skip
        jmp     dword ptr [ecx*4 + g_50aeec]

        ; Case 8 (type 9 before fixup)
loc_50AE18:
        mov     cl, [eax+74h]
        test    cl, cl
        jne     loc_50AEB3
        mov     ecx, [edx+14h]
        mov     [eax+8Ch], ecx
        lea     edi, [eax+50h]
        mov     ecx, 9
        mov     esi, edx
        rep movsd
        mov     byte ptr [eax+74h], 1
        jmp     loc_50AE97

        ; Case 9
loc_50AE3E:
        mov     cl, [eax+24h]
        test    cl, cl
        jne     loc_50AEB3
        mov     ecx, [edx+14h]
        mov     [eax+88h], ecx
        mov     ecx, [edx+0Ch]
        mov     [eax+84h], ecx
        mov     ecx, 9
        mov     esi, edx
        mov     edi, eax
        rep movsd
        mov     byte ptr [eax+24h], 1
        jmp     loc_50AE97

        ; Case 1
loc_50AE68:
        mov     cl, [eax+4Ch]
        test    cl, cl
        jne     loc_50AEB3
        mov     ecx, [edx+14h]
        jmp     loc_50AE81

        ; Case 2
loc_50AE74:
        mov     cl, [eax+4Ch]
        test    cl, cl
        jne     loc_50AEB3
        mov     ecx, [edx+14h]
        add     ecx, 0Ah
loc_50AE81:
        mov     [eax+90h], ecx
        lea     edi, [eax+28h]
        mov     ecx, 9
        mov     esi, edx
        rep movsd
        mov     byte ptr [eax+4Ch], 1

loc_50AE97:
        ; Copy common fields
        mov     ecx, [eax+78h]
        test    ecx, ecx
        jne     loc_50AEB3
        mov     ecx, [edx+4]
        mov     [eax+78h], ecx
        mov     ecx, [edx+18h]
        mov     [eax+7Ch], ecx
        mov     ecx, [edx+1Ch]
        mov     [eax+80h], ecx

loc_50AEB3:
        add     edx, 24h                ; next source entry
        cmp     edx, ebp
        jne     loc_50ADDC

loc_50AEBE:
        ; Count linked entries
        mov     ecx, [ebx+10h]
        mov     edx, [ecx+78h]
        add     ecx, 78h
        pop     edi
        xor     eax, eax
        test    edx, edx
        pop     esi
        pop     ebp
        je      loc_50AEE4

loc_50AED0:
        mov     edx, [ecx+98h]
        mov     [ecx+1Ch], eax
        add     ecx, 98h
        inc     eax
        test    edx, edx
        jne     loc_50AED0

loc_50AEE4:
        mov     [ebx+0Ch], eax          ; store count
        pop     ebx
        pop     ecx
        ret     4
    }
}
